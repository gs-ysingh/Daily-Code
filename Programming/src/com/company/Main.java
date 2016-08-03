package com.company;

import java.util.ArrayList;
import java.util.List;

public class Main {

    public static List<Point> getPointsWithDistance(List<Point> points, Point p, double distance) {
        List<Point> withDistanceList = new ArrayList<Point>();

        for (Point point: points) {
            if(p.isWithInDistance(point, distance)) {
                withDistanceList.add(point);
            }
        }
        return withDistanceList;
    }

    public static void main(String[] args) {
	    Point p = new Point(0, 0);
        Point q = new Point(3, 4);
        System.out.println("Distance: " + p.getDistance(q)); //5
        System.out.println(p.isWithInDistance(q, 4)); //false
        System.out.println(p.isWithInDistance(q, 5)); //true

        List<Point> points = new ArrayList<Point>();
        points.add(new Point(3, 4));
        points.add(new Point(13, 14));
        points.add(new Point(1, 2));
        points.add(new Point(4, 5));
        points.add(new Point(5, 0));

        List<Point> r = getPointsWithDistance(points, p, 5);

        for(Point point: r) {
            System.out.println("X: " + point.getX() + ", Y: " + point.getY());
        }
    }
}
