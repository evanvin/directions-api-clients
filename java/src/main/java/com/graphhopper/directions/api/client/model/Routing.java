/*
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


package com.graphhopper.directions.api.client.model;

import java.util.Objects;
import com.google.gson.annotations.SerializedName;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;

/**
 * Routing
 */

public class Routing {
  @SerializedName("calc_points")
  private Boolean calcPoints = null;

  public Routing calcPoints(Boolean calcPoints) {
    this.calcPoints = calcPoints;
    return this;
  }

   /**
   * indicates whether solution should come with route geometries
   * @return calcPoints
  **/
  @ApiModelProperty(example = "null", value = "indicates whether solution should come with route geometries")
  public Boolean getCalcPoints() {
    return calcPoints;
  }

  public void setCalcPoints(Boolean calcPoints) {
    this.calcPoints = calcPoints;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Routing routing = (Routing) o;
    return Objects.equals(this.calcPoints, routing.calcPoints);
  }

  @Override
  public int hashCode() {
    return Objects.hash(calcPoints);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Routing {\n");
    
    sb.append("    calcPoints: ").append(toIndentedString(calcPoints)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
  
}

