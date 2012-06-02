#include <QtTest/QtTest>
#include <..\sapr-bntu-Mediaplayer-7e902b2\mainwindow.h>
//#include <I:/NATKA/sapr-bntu-Mediaplayer-7e902b2/mainwindow.h>
class TestQString: public QObject
{
    Q_OBJECT
private slots:
    void toUpper();
    void test1();
    void test2();
    void test3();
    void test4();
    void test5();
    void test6();
    void test7();
    void test8();
    void test9();
};

void TestQString::test1()//Клецкова
{
 MainWindow testik;
testik.curentIndex = 1;
testik.next();
QCOMPARE(testik.curentIndex,2);
}
void TestQString::test2()//Клецкова
{ MainWindow testik2;
    testik2.curentIndex=1;
        testik2.play();
    QCOMPARE(testik2.curentIndex,1);
}
void TestQString::test3() //Мицкевич проверка на состояние "стоп"
{ MainWindow testik3;
        int state = testik3.stop();
    QCOMPARE(state,1);
}
void TestQString::test4() //Дубко проверка на состояние "пауза"
{ MainWindow testik4;
        int state = testik4.pause();
    QCOMPARE(state,4);
}
void TestQString::test5()//Мицкевич проверка работы кнопки предыдущая композиция
{ MainWindow testik5;
    testik5.curentIndex=3;
        testik5.prev();
    QCOMPARE(testik5.curentIndex,2);
}
void TestQString::test6()//Дубко проверка воспроизведения композиции
{ MainWindow testik6;
        testik6.play();
int state = testik6.mediaObject->state();
    QCOMPARE(state,2);
}
void TestQString::test7()//Мицкевич проверка воспроизведения композиции при нажатии кнопки next
{ MainWindow testik7;
        testik7.next();
        int state = testik7.mediaObject->state();
    QCOMPARE(state,2);
}
void TestQString::test8()//Дубко проверка воспроизведения композиции при нажатии кнопки pred
{ MainWindow testik8;
        testik8.prev();
        int state = testik8.mediaObject->state();
    QCOMPARE(state,2);
}
void TestQString::test9()//Мицкевич проверка функции клика по таблице
{ MainWindow testik9;
    QString name=testik9.on_tableView_clicked();
    QString str ="Kalimba.mp3";
    QString str1 ="pavel_volya_i_lka_-_malchik.mp3";
    QString str2 ="sdf";
    QString str3 ="sdgsg";
    QString str4 ="Tata";
    QCOMPARE(name,str);
    QCOMPARE(name,str1);
    QCOMPARE(name,str2);
    QCOMPARE(name,str3);
    QCOMPARE(name,str4);
}
void TestQString::toUpper()
{
    QString str = "Hello";
    QCOMPARE(str.toUpper(), QString("HELLO"));
}

QTEST_MAIN(TestQString)
#include "testqstring.moc"
