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
import com.graphhopper.directions.api.client.model.IsochroneResponsePolygon;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;

/**
 * IsochroneResponse
 */

public class IsochroneResponse {
  @SerializedName("polygons")
  private List<IsochroneResponsePolygon> polygons = new ArrayList<IsochroneResponsePolygon>();

  @SerializedName("copyrights")
  private List<String> copyrights = new ArrayList<String>();

  public IsochroneResponse polygons(List<IsochroneResponsePolygon> polygons) {
    this.polygons = polygons;
    return this;
  }

  public IsochroneResponse addPolygonsItem(IsochroneResponsePolygon polygonsItem) {
    this.polygons.add(polygonsItem);
    return this;
  }

   /**
   * Get polygons
   * @return polygons
  **/
  @ApiModelProperty(example = "null", value = "")
  public List<IsochroneResponsePolygon> getPolygons() {
    return polygons;
  }

  public void setPolygons(List<IsochroneResponsePolygon> polygons) {
    this.polygons = polygons;
  }

  public IsochroneResponse copyrights(List<String> copyrights) {
    this.copyrights = copyrights;
    return this;
  }

  public IsochroneResponse addCopyrightsItem(String copyrightsItem) {
    this.copyrights.add(copyrightsItem);
    return this;
  }

   /**
   * Get copyrights
   * @return copyrights
  **/
  @ApiModelProperty(example = "null", value = "")
  public List<String> getCopyrights() {
    return copyrights;
  }

  public void setCopyrights(List<String> copyrights) {
    this.copyrights = copyrights;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    IsochroneResponse isochroneResponse = (IsochroneResponse) o;
    return Objects.equals(this.polygons, isochroneResponse.polygons) &&
        Objects.equals(this.copyrights, isochroneResponse.copyrights);
  }

  @Override
  public int hashCode() {
    return Objects.hash(polygons, copyrights);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class IsochroneResponse {\n");
    
    sb.append("    polygons: ").append(toIndentedString(polygons)).append("\n");
    sb.append("    copyrights: ").append(toIndentedString(copyrights)).append("\n");
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

