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

    public static void getAnagrams(List<String> result, String input, int n) {
        if(n == 0) {
            return;
        }

        getAnagrams(result, input, n - 1);

        for(int i = 0; i < n - 1; i++) {
            String a = String.valueOf(input.charAt(i));
            String b = String.valueOf(input.charAt(n - 1));

            StringBuilder str = new StringBuilder("");

            if(i > 0) {
                str.append(input.substring(0, i));
            }
            str.append(b);

            if(i + 1 < input.length() && n - 1 > 0 && n - 1 < input.length()) {
                str.append(input.substring(i + 1, n - 1));
            }

            str.append(a);

            if(n < input.length()) {
                str.append(input.substring(n));
            }

            result.add(str.toString());
        }
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

        List<String> result = new ArrayList<String>();
        getAnagrams(result, "abcde", 5);
        for (String st : result) {
            System.out.println(st);
        }
    }
}
