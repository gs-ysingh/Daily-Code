package com.company;

/**
 * Created by YSingh on 01/08/16.
 */
public class Point {
    private int x;
    private int y;

    public double getDistance(Point other) {
        return Math.sqrt(Math.pow(Math.abs(other.x - this.x), 2) + Math.pow(Math.abs(other.y - this.y), 2));
    }

    public boolean isWithInDistance(Point other, double distance) {
        return this.getDistance(other) <= distance;
    }

    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public int getX() {
        return this.x;
    }

    public int getY() {
        return this.y;
    }
}

