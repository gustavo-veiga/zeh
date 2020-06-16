#include <zeh/service/geo.h>
using namespace zeh::model;
using namespace zeh::service;

// Checks if point is inside polygon
bool geo::point_in_polygon(const point &point, const polygon &polygon) {
    // Get the bounding box of the polygon in question
    auto bounding_box = this->get_bounding_box(polygon);

    // If point not in bounding box return false immediately
    if (!this->point_in_bounding_box(point, bounding_box)){
        return false;
    }

    // If the point is in the bounding box then we need to check the polygon
    auto vertex = polygon.points;
    bool inside = false;
    const double x = point.x, y = point.y;
    for (size_t i = 0, j = vertex.size() - 1; i < vertex.size(); j = i++) {
        double xi = vertex[i].x, yi = vertex[i].y;
        double xj = vertex[j].x, yj = vertex[j].y;
        bool intersect = ((yi > y) not_eq (yj > y))
                         and (x < (xj - xi) * (y - yi) / (yj - yi) + xi);
        if (intersect) inside = !inside;
    }
    return inside;
}