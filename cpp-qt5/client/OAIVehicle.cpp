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


#include "OAIVehicle.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIVehicle::OAIVehicle(QString json) {
    init();
    this->fromJson(json);
}

OAIVehicle::OAIVehicle() {
    init();
}

OAIVehicle::~OAIVehicle() {
    this->cleanup();
}

void
OAIVehicle::init() {
    vehicle_id = new QString("");
    m_vehicle_id_isSet = false;
    type_id = new QString("");
    m_type_id_isSet = false;
    start_address = new OAIAddress();
    m_start_address_isSet = false;
    end_address = new OAIAddress();
    m_end_address_isSet = false;
    _break = new OAIBreak();
    m__break_isSet = false;
    return_to_depot = false;
    m_return_to_depot_isSet = false;
    earliest_start = 0L;
    m_earliest_start_isSet = false;
    latest_end = 0L;
    m_latest_end_isSet = false;
    skills = new QList<QString*>();
    m_skills_isSet = false;
    max_distance = 0L;
    m_max_distance_isSet = false;
    max_driving_time = 0L;
    m_max_driving_time_isSet = false;
    max_jobs = 0;
    m_max_jobs_isSet = false;
    max_activities = 0;
    m_max_activities_isSet = false;
}

void
OAIVehicle::cleanup() {
    if(vehicle_id != nullptr) { 
        delete vehicle_id;
    }
    if(type_id != nullptr) { 
        delete type_id;
    }
    if(start_address != nullptr) { 
        delete start_address;
    }
    if(end_address != nullptr) { 
        delete end_address;
    }
    if(_break != nullptr) { 
        delete _break;
    }



    if(skills != nullptr) { 
        auto arr = skills;
        for(auto o: *arr) { 
            delete o;
        }
        delete skills;
    }




}

OAIVehicle*
OAIVehicle::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIVehicle::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&vehicle_id, pJson["vehicle_id"], "QString", "QString");
    
    ::OpenAPI::setValue(&type_id, pJson["type_id"], "QString", "QString");
    
    ::OpenAPI::setValue(&start_address, pJson["start_address"], "OAIAddress", "OAIAddress");
    
    ::OpenAPI::setValue(&end_address, pJson["end_address"], "OAIAddress", "OAIAddress");
    
    ::OpenAPI::setValue(&_break, pJson["break"], "OAIBreak", "OAIBreak");
    
    ::OpenAPI::setValue(&return_to_depot, pJson["return_to_depot"], "bool", "");
    
    ::OpenAPI::setValue(&earliest_start, pJson["earliest_start"], "qint64", "");
    
    ::OpenAPI::setValue(&latest_end, pJson["latest_end"], "qint64", "");
    
    
    ::OpenAPI::setValue(&skills, pJson["skills"], "QList", "QString");
    ::OpenAPI::setValue(&max_distance, pJson["max_distance"], "qint64", "");
    
    ::OpenAPI::setValue(&max_driving_time, pJson["max_driving_time"], "qint64", "");
    
    ::OpenAPI::setValue(&max_jobs, pJson["max_jobs"], "qint32", "");
    
    ::OpenAPI::setValue(&max_activities, pJson["max_activities"], "qint32", "");
    
}

QString
OAIVehicle::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIVehicle::asJsonObject() {
    QJsonObject obj;
    if(vehicle_id != nullptr && *vehicle_id != QString("")){
        toJsonValue(QString("vehicle_id"), vehicle_id, obj, QString("QString"));
    }
    if(type_id != nullptr && *type_id != QString("")){
        toJsonValue(QString("type_id"), type_id, obj, QString("QString"));
    }
    if((start_address != nullptr) && (start_address->isSet())){
        toJsonValue(QString("start_address"), start_address, obj, QString("OAIAddress"));
    }
    if((end_address != nullptr) && (end_address->isSet())){
        toJsonValue(QString("end_address"), end_address, obj, QString("OAIAddress"));
    }
    if((_break != nullptr) && (_break->isSet())){
        toJsonValue(QString("break"), _break, obj, QString("OAIBreak"));
    }
    if(m_return_to_depot_isSet){
        obj.insert("return_to_depot", QJsonValue(return_to_depot));
    }
    if(m_earliest_start_isSet){
        obj.insert("earliest_start", QJsonValue(earliest_start));
    }
    if(m_latest_end_isSet){
        obj.insert("latest_end", QJsonValue(latest_end));
    }
    if(skills->size() > 0){
        toJsonArray((QList<void*>*)skills, obj, "skills", "QString");
    }
    if(m_max_distance_isSet){
        obj.insert("max_distance", QJsonValue(max_distance));
    }
    if(m_max_driving_time_isSet){
        obj.insert("max_driving_time", QJsonValue(max_driving_time));
    }
    if(m_max_jobs_isSet){
        obj.insert("max_jobs", QJsonValue(max_jobs));
    }
    if(m_max_activities_isSet){
        obj.insert("max_activities", QJsonValue(max_activities));
    }

    return obj;
}

QString*
OAIVehicle::getVehicleId() {
    return vehicle_id;
}
void
OAIVehicle::setVehicleId(QString* vehicle_id) {
    this->vehicle_id = vehicle_id;
    this->m_vehicle_id_isSet = true;
}

QString*
OAIVehicle::getTypeId() {
    return type_id;
}
void
OAIVehicle::setTypeId(QString* type_id) {
    this->type_id = type_id;
    this->m_type_id_isSet = true;
}

OAIAddress*
OAIVehicle::getStartAddress() {
    return start_address;
}
void
OAIVehicle::setStartAddress(OAIAddress* start_address) {
    this->start_address = start_address;
    this->m_start_address_isSet = true;
}

OAIAddress*
OAIVehicle::getEndAddress() {
    return end_address;
}
void
OAIVehicle::setEndAddress(OAIAddress* end_address) {
    this->end_address = end_address;
    this->m_end_address_isSet = true;
}

OAIBreak*
OAIVehicle::getBreak() {
    return _break;
}
void
OAIVehicle::setBreak(OAIBreak* _break) {
    this->_break = _break;
    this->m__break_isSet = true;
}

bool
OAIVehicle::isReturnToDepot() {
    return return_to_depot;
}
void
OAIVehicle::setReturnToDepot(bool return_to_depot) {
    this->return_to_depot = return_to_depot;
    this->m_return_to_depot_isSet = true;
}

qint64
OAIVehicle::getEarliestStart() {
    return earliest_start;
}
void
OAIVehicle::setEarliestStart(qint64 earliest_start) {
    this->earliest_start = earliest_start;
    this->m_earliest_start_isSet = true;
}

qint64
OAIVehicle::getLatestEnd() {
    return latest_end;
}
void
OAIVehicle::setLatestEnd(qint64 latest_end) {
    this->latest_end = latest_end;
    this->m_latest_end_isSet = true;
}

QList<QString*>*
OAIVehicle::getSkills() {
    return skills;
}
void
OAIVehicle::setSkills(QList<QString*>* skills) {
    this->skills = skills;
    this->m_skills_isSet = true;
}

qint64
OAIVehicle::getMaxDistance() {
    return max_distance;
}
void
OAIVehicle::setMaxDistance(qint64 max_distance) {
    this->max_distance = max_distance;
    this->m_max_distance_isSet = true;
}

qint64
OAIVehicle::getMaxDrivingTime() {
    return max_driving_time;
}
void
OAIVehicle::setMaxDrivingTime(qint64 max_driving_time) {
    this->max_driving_time = max_driving_time;
    this->m_max_driving_time_isSet = true;
}

qint32
OAIVehicle::getMaxJobs() {
    return max_jobs;
}
void
OAIVehicle::setMaxJobs(qint32 max_jobs) {
    this->max_jobs = max_jobs;
    this->m_max_jobs_isSet = true;
}

qint32
OAIVehicle::getMaxActivities() {
    return max_activities;
}
void
OAIVehicle::setMaxActivities(qint32 max_activities) {
    this->max_activities = max_activities;
    this->m_max_activities_isSet = true;
}


bool
OAIVehicle::isSet(){
    bool isObjectUpdated = false;
    do{
        if(vehicle_id != nullptr && *vehicle_id != QString("")){ isObjectUpdated = true; break;}
        if(type_id != nullptr && *type_id != QString("")){ isObjectUpdated = true; break;}
        if(start_address != nullptr && start_address->isSet()){ isObjectUpdated = true; break;}
        if(end_address != nullptr && end_address->isSet()){ isObjectUpdated = true; break;}
        if(_break != nullptr && _break->isSet()){ isObjectUpdated = true; break;}
        if(m_return_to_depot_isSet){ isObjectUpdated = true; break;}
        if(m_earliest_start_isSet){ isObjectUpdated = true; break;}
        if(m_latest_end_isSet){ isObjectUpdated = true; break;}
        if(skills->size() > 0){ isObjectUpdated = true; break;}
        if(m_max_distance_isSet){ isObjectUpdated = true; break;}
        if(m_max_driving_time_isSet){ isObjectUpdated = true; break;}
        if(m_max_jobs_isSet){ isObjectUpdated = true; break;}
        if(m_max_activities_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
