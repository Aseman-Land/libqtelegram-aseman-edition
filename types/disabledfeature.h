#ifndef LQTG_DISABLEDFEATURE
#define LQTG_DISABLEDFEATURE

#include "telegramtypeobject.h"
#include <QString>

class DisabledFeature : public TelegramTypeObject
{
public:
    enum DisabledFeatureType {
        typeDisabledFeature = 0xae636f24
    };

    DisabledFeature(DisabledFeatureType classType = typeDisabledFeature, InboundPkt *in = 0);
    DisabledFeature(InboundPkt *in);
    virtual ~DisabledFeature();

    void setDescription(const QString &description);
    QString description() const;

    void setFeature(const QString &feature);
    QString feature() const;

    void setClassType(DisabledFeatureType classType);
    DisabledFeatureType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const DisabledFeature &b);

private:
    QString m_description;
    QString m_feature;
    DisabledFeatureType m_classType;
};

#endif // LQTG_DISABLEDFEATURE
