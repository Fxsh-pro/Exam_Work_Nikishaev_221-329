#include <QtTest>
#include <QList>
#include <QPair>
#include "../Exam/functions.h"

class mathTest : public QObject
{
    Q_OBJECT

public:
    mathTest();
    ~mathTest();

private slots:
    void test_case1();

};

mathTest::mathTest()
{

}

mathTest::~mathTest()
{

}

void mathTest::test_case1()
{

    QList<QPair<float, float>> points1; ///6.47214 2

    points1.append(QPair<float, float>(1.0, 1.0));
    points1.append(QPair<float, float>(2.0, 3.0));
    points1.append(QPair<float, float>(3.0, 1.0));

    QList<QPair<float, float>> points2; /// 86.5292 34.4992

    points2.append(QPair<float, float>(1, 4));
    points2.append(QPair<float, float>(33, 33));
    points2.append(QPair<float, float>(10, 10));

    QList<QPair<float, float>> points3; /// 13.831 7.5

    points3.append(QPair<float, float>(0, 0));
    points3.append(QPair<float, float>(0, 3));
    points3.append(QPair<float, float>(5, 0));

    QList<QPair<float, float>> points4; /// 30.7279 40.5
    points4.append(QPair<float, float>(1, 1));
    points4.append(QPair<float, float>(1, 10));
    points4.append(QPair<float, float>(10, 1));

    QList<QPair<float, float>> points5; /// 6.82843 2
    points5.append(QPair<float, float>(2, 0));
    points5.append(QPair<float, float>(0, 2));
    points5.append(QPair<float, float>(2, 2));

    QVERIFY(qFuzzyCompare(calculatePerimeter(points1), 6.47214f));
    QVERIFY(qFuzzyCompare(calculatePerimeter(points2), 86.5292f));
    QVERIFY(qFuzzyCompare(calculatePerimeter(points3), 13.831f));
    QVERIFY(qFuzzyCompare(calculatePerimeter(points4), 30.7279f));
    QVERIFY(qFuzzyCompare(calculatePerimeter(points5), 6.82843f));


    QVERIFY(qFuzzyCompare(calculateArea(points1), 2.0f));
    QVERIFY(qFuzzyCompare(calculateArea(points2), 34.4992f));
    QVERIFY(qFuzzyCompare(calculateArea(points3), 7.5f));
    QVERIFY(qFuzzyCompare(calculateArea(points4), 40.5f));
    QVERIFY(qFuzzyCompare(calculateArea(points5), 2.0f));


}

QTEST_APPLESS_MAIN(mathTest)

#include "tst_mathtest.moc"
