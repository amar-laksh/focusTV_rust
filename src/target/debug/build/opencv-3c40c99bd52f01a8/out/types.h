#include <cstddef>
typedef struct c_CvRNG {
    int64 data;
} c_CvRNG;

typedef struct c_Point2f {
    float x;
    float y;
} c_Point2f;

typedef struct c_Point2d {
    double x;
    double y;
} c_Point2d;

typedef struct c_Point {
    int x;
    int y;
} c_Point;

typedef struct c_Rect {
    int x;
    int y;
    int width;
    int height;
} c_Rect;

typedef struct c_Size2f {
    float width;
    float height;
} c_Size2f;

typedef struct c_Scalar {
    double data[4];
} c_Scalar;

typedef struct c_Size {
    int width;
    int height;
} c_Size;

typedef struct c_Vec6f {
    float data[6];
} c_Vec6f;

typedef struct c_Vec4f {
    float data[4];
} c_Vec4f;

typedef struct c_Vec4d {
    double data[4];
} c_Vec4d;

typedef struct c_Vec4b {
    unsigned char data[4];
} c_Vec4b;

typedef struct c_Vec4i {
    int data[4];
} c_Vec4i;

typedef struct c_Vec4s {
    short data[4];
} c_Vec4s;

typedef struct c_Vec6i {
    int data[6];
} c_Vec6i;

typedef struct c_Vec6b {
    unsigned char data[6];
} c_Vec6b;

typedef struct c_Vec3s {
    short data[3];
} c_Vec3s;

typedef struct c_Vec2s {
    short data[2];
} c_Vec2s;

typedef struct c_Vec6s {
    short data[6];
} c_Vec6s;

typedef struct c_Vec3d {
    double data[3];
} c_Vec3d;

typedef struct c_Vec3f {
    float data[3];
} c_Vec3f;

typedef struct c_Vec2d {
    double data[2];
} c_Vec2d;

typedef struct c_Vec2f {
    float data[2];
} c_Vec2f;

typedef struct c_Vec3b {
    unsigned char data[3];
} c_Vec3b;

typedef struct c_Vec2b {
    unsigned char data[2];
} c_Vec2b;

typedef struct c_Vec3i {
    int data[3];
} c_Vec3i;

typedef struct c_Vec2i {
    int data[2];
} c_Vec2i;

typedef struct c_Vec6d {
    double data[6];
} c_Vec6d;

typedef struct c_Moments {
    double m00;
    double m10;
    double m01;
    double m20;
    double m11;
    double m02;
    double m30;
    double m21;
    double m12;
    double m03;
    double mu20;
    double mu11;
    double mu02;
    double mu30;
    double mu21;
    double mu12;
    double mu03;
    double nu20;
    double nu11;
    double nu02;
    double nu30;
    double nu21;
    double nu12;
    double nu03;
} c_Moments;

typedef struct c_KeyPoint {
    c_Point2f pt;
    float size;
    float angle;
    float response;
    int octave;
    int class_id;
} c_KeyPoint;

typedef struct c_DMatch {
    int queryIdx;
    int trainIdx;
    int imgIdx;
    float distance;
} c_DMatch;

typedef struct c_SimpleBlobDetector_Params {
    float thresholdStep;
    float minThreshold;
    float maxThreshold;
    std::size_t minRepeatability;
    float minDistBetweenBlobs;
    char filterByColor;
    unsigned char blobColor;
    char filterByArea;
    float minArea;
    float maxArea;
    char filterByCircularity;
    float minCircularity;
    float maxCircularity;
    char filterByInertia;
    float minInertiaRatio;
    float maxInertiaRatio;
    char filterByConvexity;
    float minConvexity;
    float maxConvexity;
} c_SimpleBlobDetector_Params;

