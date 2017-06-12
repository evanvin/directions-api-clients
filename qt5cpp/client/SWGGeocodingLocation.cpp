/**
 * GraphHopper Directions API
 * You use the GraphHopper Directions API to add route planning, navigation and route optimization to your software. E.g. the Routing API has turn instructions and elevation data and the Route Optimization API solves your logistic problems and supports various constraints like time window and capacity restrictions. Also it is possible to get all distances between all locations with our fast Matrix API.
 *
 * OpenAPI spec version: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGGeocodingLocation.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGGeocodingLocation::SWGGeocodingLocation(QString* json) {
    init();
    this->fromJson(*json);
}

SWGGeocodingLocation::SWGGeocodingLocation() {
    init();
}

SWGGeocodingLocation::~SWGGeocodingLocation() {
    this->cleanup();
}

void
SWGGeocodingLocation::init() {
    point = new SWGGeocodingPoint();
    osm_id = new QString("");
    osm_type = new QString("");
    osm_key = new QString("");
    name = new QString("");
    country = new QString("");
    city = new QString("");
    state = new QString("");
    street = new QString("");
    housenumber = new QString("");
    postcode = new QString("");
}

void
SWGGeocodingLocation::cleanup() {
    
    if(point != nullptr) {
        delete point;
    }

    if(osm_id != nullptr) {
        delete osm_id;
    }

    if(osm_type != nullptr) {
        delete osm_type;
    }

    if(osm_key != nullptr) {
        delete osm_key;
    }

    if(name != nullptr) {
        delete name;
    }

    if(country != nullptr) {
        delete country;
    }

    if(city != nullptr) {
        delete city;
    }

    if(state != nullptr) {
        delete state;
    }

    if(street != nullptr) {
        delete street;
    }

    if(housenumber != nullptr) {
        delete housenumber;
    }

    if(postcode != nullptr) {
        delete postcode;
    }
}

SWGGeocodingLocation*
SWGGeocodingLocation::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGGeocodingLocation::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&point, pJson["point"], "SWGGeocodingPoint", "SWGGeocodingPoint");
    ::Swagger::setValue(&osm_id, pJson["osm_id"], "QString", "QString");
    ::Swagger::setValue(&osm_type, pJson["osm_type"], "QString", "QString");
    ::Swagger::setValue(&osm_key, pJson["osm_key"], "QString", "QString");
    ::Swagger::setValue(&name, pJson["name"], "QString", "QString");
    ::Swagger::setValue(&country, pJson["country"], "QString", "QString");
    ::Swagger::setValue(&city, pJson["city"], "QString", "QString");
    ::Swagger::setValue(&state, pJson["state"], "QString", "QString");
    ::Swagger::setValue(&street, pJson["street"], "QString", "QString");
    ::Swagger::setValue(&housenumber, pJson["housenumber"], "QString", "QString");
    ::Swagger::setValue(&postcode, pJson["postcode"], "QString", "QString");
}

QString
SWGGeocodingLocation::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGGeocodingLocation::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("point"), point, obj, QString("SWGGeocodingPoint"));

    toJsonValue(QString("osm_id"), osm_id, obj, QString("QString"));

    toJsonValue(QString("osm_type"), osm_type, obj, QString("QString"));

    toJsonValue(QString("osm_key"), osm_key, obj, QString("QString"));

    toJsonValue(QString("name"), name, obj, QString("QString"));

    toJsonValue(QString("country"), country, obj, QString("QString"));

    toJsonValue(QString("city"), city, obj, QString("QString"));

    toJsonValue(QString("state"), state, obj, QString("QString"));

    toJsonValue(QString("street"), street, obj, QString("QString"));

    toJsonValue(QString("housenumber"), housenumber, obj, QString("QString"));

    toJsonValue(QString("postcode"), postcode, obj, QString("QString"));

    return obj;
}

SWGGeocodingPoint*
SWGGeocodingLocation::getPoint() {
    return point;
}
void
SWGGeocodingLocation::setPoint(SWGGeocodingPoint* point) {
    this->point = point;
}

QString*
SWGGeocodingLocation::getOsmId() {
    return osm_id;
}
void
SWGGeocodingLocation::setOsmId(QString* osm_id) {
    this->osm_id = osm_id;
}

QString*
SWGGeocodingLocation::getOsmType() {
    return osm_type;
}
void
SWGGeocodingLocation::setOsmType(QString* osm_type) {
    this->osm_type = osm_type;
}

QString*
SWGGeocodingLocation::getOsmKey() {
    return osm_key;
}
void
SWGGeocodingLocation::setOsmKey(QString* osm_key) {
    this->osm_key = osm_key;
}

QString*
SWGGeocodingLocation::getName() {
    return name;
}
void
SWGGeocodingLocation::setName(QString* name) {
    this->name = name;
}

QString*
SWGGeocodingLocation::getCountry() {
    return country;
}
void
SWGGeocodingLocation::setCountry(QString* country) {
    this->country = country;
}

QString*
SWGGeocodingLocation::getCity() {
    return city;
}
void
SWGGeocodingLocation::setCity(QString* city) {
    this->city = city;
}

QString*
SWGGeocodingLocation::getState() {
    return state;
}
void
SWGGeocodingLocation::setState(QString* state) {
    this->state = state;
}

QString*
SWGGeocodingLocation::getStreet() {
    return street;
}
void
SWGGeocodingLocation::setStreet(QString* street) {
    this->street = street;
}

QString*
SWGGeocodingLocation::getHousenumber() {
    return housenumber;
}
void
SWGGeocodingLocation::setHousenumber(QString* housenumber) {
    this->housenumber = housenumber;
}

QString*
SWGGeocodingLocation::getPostcode() {
    return postcode;
}
void
SWGGeocodingLocation::setPostcode(QString* postcode) {
    this->postcode = postcode;
}



} /* namespace Swagger */
