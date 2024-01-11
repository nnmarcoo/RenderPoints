#include "Renderer.h"
#include <chrono>
#include <U8g2lib.h>

void Renderer::Render() {
  display.clearBuffer();

  for (auto edge : edges) {
    Point2D n1 = camera.Project(RotateY(RotateZ(points[edge.n1])));
    Point2D n2 = camera.Project(RotateY(RotateZ(points[edge.n2])));

    display.drawLine(scale * n1.x + position.x, 
                     scale * n1.y + position.y, 
                     scale * n2.x + position.x, 
                     scale * n2.y + position.y);
  }

  display.sendBuffer();
}

Point3D Renderer::RotateX(Point3D point) {
  Point3D output;
  output.x = point.x;
  output.y = cos(rotation) * point.y - sin(rotation) * point.z;
  output.z = sin(rotation) * point.y + cos(rotation) * point.z;
  return output;
}

Point3D Renderer::RotateY(Point3D point) {
  Point3D output;
  output.x = cos(rotation) * point.y - sin(rotation) * point.z;
  output.y = point.y;
  output.z = sin(rotation) * point.y + cos(rotation) * point.z;
  return output;
}

Point3D Renderer::RotateZ(Point3D point) {
  Point3D output;
  output.x = cos(rotation) * point.y - sin(rotation) * point.z;
  output.y = sin(rotation) * point.y + cos(rotation) * point.z;
  output.z = point.z;
  return output;
}