#include <gtest/gtest.h>

#include <core/settings.h>
#include <core/dc.h>

#include <tests/tests_config.h>

TEST(Settings, populate_settings_with_external_auth_and_deserialize)
{
    QMap<QString, QVariant> authSettings;   

    //Insert first the second value, to test that order is not relevant
    const char* authKey_0 = "u/EBkd2MNIHyX9q1nPf8Vor9TOcz8VJdNDyAzXTVVWk6OrnL5FDdfvHNuJ+" \
            "OGn6xp8psWxrWGIx/jXFQKU1m3kiSdtYnGIzgQ4sA016qgjMrFvik8Z2pL7BdPoajepmfsM8Uv4" \
            "H82GLkub/xGPgD8vCyHDBqqP14mwgKJOYdHYZDgsD8pKtCyG3Kz4Qs2rowOIBCdJoAs2YIz8qYi" \
            "pi9kY0re5HtT3pRoFR03Ex3zNARKfBF1c/QVXN3DBH1X7x2hWm7r1xBxcTuzLMuodYR+cYzi3WO" \
            "hNnpow3Hski+atF7LqFIK5E7RrLVS3XA64uvvJEAQibQV4WZ0YcFkHQ0Ew==";
    qint64 authKeyId_0 = -5157031044019280201;
    int dcNum_0 = 1;
    int expires_0 = 2147483647;
    QString host_0 = "149.154.167.51";
    int port_0 = 443;
    qint64 serverSalt_0 = 4036376951364784531;
    int state_0 = 5;

    authSettings.insert("production/dcs/0/authKey", authKey_0);
    authSettings.insert("production/dcs/0/authKeyId", authKeyId_0);
    authSettings.insert("production/dcs/0/dcNum", dcNum_0);
    authSettings.insert("production/dcs/0/expires", expires_0);
    authSettings.insert("production/dcs/0/host", host_0);
    authSettings.insert("production/dcs/0/port", port_0);
    authSettings.insert("production/dcs/0/serverSalt", serverSalt_0);
    authSettings.insert("production/dcs/0/state", state_0);

    const char* authKey_1 = "MOFFQGijXwwZ9no5FLulN33bLDY3rwOtIy0ohZqBo0b+peD40Bbb0TuDpreM" \
            "U0NkjVlLYe8okdCOt0Lp5OD5Uh/cVE/6fxMqgu4q+sb16Z+1O8zqbkF27q8i9HYjGrDXSN1LG6yL" \
            "hcB5oMAC7Yl/mm6OXxqSZmn0O84H/Wehw/2eH4mnSF3h6FoQ9CTbBQzhSYth0xJU2g5pOXMJ2EY7" \
            "IssMSySM6cFthCkmBO5RfeD2yQpaCmdcUdPMw5gQkDUiVuYEAVlsrasFkJCQjQXphkD1bKv/NZ5s" \
            "rdLvPgRX3l8/TtyyTBlhQxl76UISA3RnsEXokdWCxG++9uWGeRSlJQ==";
    qint64 authKeyId_1 = -332702849868299254;
    int dcNum_1 = 2;
    int expires_1 = 2147483647;
    QString host_1 = "149.154.175.50";
    int port_1 = 443;
    qint64 serverSalt_1 = -4566876805105753485;
    int state_1 = 5;

    authSettings.insert("production/dcs/1/authKey", authKey_1);
    authSettings.insert("production/dcs/1/authKeyId", authKeyId_1);
    authSettings.insert("production/dcs/1/dcNum", dcNum_1);
    authSettings.insert("production/dcs/1/expires", expires_1);
    authSettings.insert("production/dcs/1/host", host_1);
    authSettings.insert("production/dcs/1/port", port_1);
    authSettings.insert("production/dcs/1/serverSalt", serverSalt_1);
    authSettings.insert("production/dcs/1/state", state_1);

    authSettings.insert("production/dcs/size", 2);

    Settings settings;
    settings.loadSettings(thePhoneNumber(), "/tmp", thePublicKeyFile(), authSettings);

    // check if properly readed. There should be 3 elements, since element at position 0 is an empty one
    // to avoid problems of having null intermediate elements in a QList (something not permited). This way
    // we'll have:
    // DC at 0 -> empty (but not null)
    // DC at 1 -> DC_1
    // DC at 2 -> DC_2
    EXPECT_EQ(settings.dcsList().size(), 2);

    DC* dc1 = settings.dcsList().at(0);
    EXPECT_EQ(dc1->id(), 1);
    QByteArray baToSave_1(dc1->authKey(), SHARED_KEY_LENGTH);
    EXPECT_EQ(baToSave_1.toBase64(), authKey_0);
    EXPECT_EQ(dc1->authKeyId(), authKeyId_0);
    EXPECT_EQ(dc1->expires(), expires_0);
    EXPECT_EQ(dc1->host(), host_0);
    EXPECT_EQ(dc1->port(), port_0);
    EXPECT_EQ(dc1->serverSalt(), serverSalt_0);
    EXPECT_EQ(dc1->state(), state_0);

    DC* dc2 = settings.dcsList().at(1);
    EXPECT_EQ(dc2->id(), 2);
    QByteArray baToSave_2(dc2->authKey(), SHARED_KEY_LENGTH);
    EXPECT_EQ(baToSave_2.toBase64(), authKey_1);
    EXPECT_EQ(dc2->authKeyId(), authKeyId_1);
    EXPECT_EQ(dc2->expires(), expires_1);
    EXPECT_EQ(dc2->host(), host_1);
    EXPECT_EQ(dc2->port(), port_1);
    EXPECT_EQ(dc2->serverSalt(), serverSalt_1);
    EXPECT_EQ(dc2->state(), state_1);

    //Now, deserialize settings content and check resultant map
    QMap<QString, QVariant> serializedSettings = settings.buildAuthMap();
    EXPECT_EQ(serializedSettings.value("production/dcs/1/authKey"), authKey_1);
    EXPECT_EQ(serializedSettings.value("production/dcs/1/authKeyId"), authKeyId_1);
    EXPECT_EQ(serializedSettings.value("production/dcs/1/dcNum"), dcNum_1);
    EXPECT_EQ(serializedSettings.value("production/dcs/1/expires"), expires_1);
    EXPECT_EQ(serializedSettings.value("production/dcs/1/host"), host_1);
    EXPECT_EQ(serializedSettings.value("production/dcs/1/serverSalt"), serverSalt_1);
    EXPECT_EQ(serializedSettings.value("production/dcs/1/state"), state_1);

    EXPECT_EQ(serializedSettings.value("production/dcs/0/authKey"), authKey_0);
    EXPECT_EQ(serializedSettings.value("production/dcs/0/authKeyId"), authKeyId_0);
    EXPECT_EQ(serializedSettings.value("production/dcs/0/dcNum"), dcNum_0);
    EXPECT_EQ(serializedSettings.value("production/dcs/0/expires"), expires_0);
    EXPECT_EQ(serializedSettings.value("production/dcs/0/host"), host_0);
    EXPECT_EQ(serializedSettings.value("production/dcs/0/serverSalt"), serverSalt_0);
    EXPECT_EQ(serializedSettings.value("production/dcs/0/state"), state_0);
}
