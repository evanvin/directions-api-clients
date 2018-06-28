/**
 * GraphHopper Directions API
 * You use the GraphHopper Directions API to add route planning, navigation and route optimization to your software. E.g. the Routing API has turn instructions and elevation data and the Route Optimization API solves your logistic problems and supports various constraints like time window and capacity restrictions. Also it is possible to get all distances between all locations with our fast Matrix API.
 *
 * OpenAPI spec version: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIRelation.h
 *
 * 
 */

#ifndef OAIRelation_H_
#define OAIRelation_H_

#include <QJsonObject>


#include <QList>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIRelation: public OAIObject {
public:
    OAIRelation();
    OAIRelation(QString json);
    ~OAIRelation();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIRelation* fromJson(QString jsonString) override;

    QString* getType();
    void setType(QString* type);

    QList<QString*>* getIds();
    void setIds(QList<QString*>* ids);

    QString* getVehicleId();
    void setVehicleId(QString* vehicle_id);


    virtual bool isSet() override;

private:
    QString* type;
    bool m_type_isSet;

    QList<QString*>* ids;
    bool m_ids_isSet;

    QString* vehicle_id;
    bool m_vehicle_id_isSet;

};

}

#endif /* OAIRelation_H_ */