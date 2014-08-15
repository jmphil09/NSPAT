#include <QString>
#include <QtTest>

class NSPATTestTest : public QObject
{
    Q_OBJECT
    
public:
    NSPATTestTest();
    
private Q_SLOTS:
    void testCase1();
};

NSPATTestTest::NSPATTestTest()
{
}

void NSPATTestTest::testCase1()
{
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(NSPATTestTest)

#include "tst_nspattesttest.moc"
