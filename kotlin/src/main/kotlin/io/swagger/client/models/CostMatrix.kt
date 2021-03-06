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
package io.swagger.client.models

import io.swagger.client.models.CostMatrix_data

/**
 * 
 * @param type type of cost matrix, currently default or google are supported
 * @param url URL of matrix service
 * @param location_ids 
 * @param &#x60;data&#x60; 
 * @param profile vehicle profile or empty if catch all fallback
 */
data class CostMatrix (
    /* type of cost matrix, currently default or google are supported */
    val type: CostMatrix.Type? = null,
    /* URL of matrix service */
    val url: kotlin.String? = null,
    val location_ids: kotlin.Array<kotlin.String>? = null,
    val `data`: CostMatrix_data? = null,
    /* vehicle profile or empty if catch all fallback */
    val profile: kotlin.String? = null
) {

    /**
    * type of cost matrix, currently default or google are supported
    * Values: default,google
    */
    enum class Type(val value: kotlin.Any){
    
        default("default"),
    
        google("google");
    
    }

}

