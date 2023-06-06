#include "functions.h"

float calculateDistance(QPair<float,float> fPoint, QPair<float,float> sPoint){
    float res = std::sqrt(std::pow(sPoint.first - fPoint.first,2) + std::pow(sPoint.second - fPoint.second,2));
    return res;
}
float calculatePerimeter(QList<QPair<float,float>> points){
    float side1 = calculateDistance(points[0],points[1]);
    float side2 = calculateDistance(points[1],points[2]);
    float side3 = calculateDistance(points[0],points[2]);

    float perimeter = side1 + side2 + side3;
    return perimeter;
}
float calculateArea(QList<QPair<float,float>> points){
    float side1 = calculateDistance(points[0],points[1]);
    float side2 = calculateDistance(points[1],points[2]);
    float side3 = calculateDistance(points[0],points[2]);

    float semiperimeter = (side1 + side2 + side3) / 2.0;
    float area = std::sqrt(semiperimeter * (semiperimeter - side1) * (semiperimeter - side2) * (semiperimeter - side3));

    return area;
}


QList<QPair<float, float>> converToList(QList<QByteArray>  parts){
    QList<QPair<float, float>> pairList;
    for(int i = 1; i < 4; i++){
        QList values = parts[i].split(',');
        float value1 = values[0].toFloat();
        float value2 = values[1].toFloat();
        QPair<float, float> pair(value1, value2);
        pairList.append(pair);
    }
    return pairList;
}

QByteArray parse(QByteArray mess){
    mess.chop(2);
    QList parts = mess.split('@');
    if (parts.size() < 4)
        return "Error! Введите нужное количесво параментов\r\n";
    if (parts[0] == "perimetr"){
        QList<QPair<float, float>> pairList = converToList(parts);
        return "Perimetr: " + QByteArray::number(calculatePerimeter(pairList)) + "\r\n";
    }
    if (parts[0] == "square"){
        QList<QPair<float, float>> pairList = converToList(parts);
        return "Area: " + QByteArray::number(calculateArea(pairList)) + "\r\n";
    }

    return "Error! Введите нужное количесво параментов\r\n";
}



