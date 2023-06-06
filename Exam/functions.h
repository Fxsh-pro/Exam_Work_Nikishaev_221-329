#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <QByteArray>
#include <QList>
#include <cmath>
#include <QPair>
#include <QDebug>


QByteArray parse(QByteArray mess);

float calculateDistance(QPair<float,float> fPoint, QPair<float,float> sPoint);
float calculatePerimeter(QList<QPair<float, float>> points);
float calculateArea(QList<QPair<float,float>> points);
QList<QPair<float, float>> converToList(QList<QByteArray>  parts);

#endif // FUNCTIONS_H
