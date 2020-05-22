#define SCREEN_WIDTH 800

#define SCREEN_HEIGHT 800


#define HALF_SCREEN_WIDTH SCREEN_WIDTH/2
#define HALF_SCREEN_HEIGHT SCREEN_HEIGHT/2

float INSTRUCTION_POS = -1.5;

float v[4][3] = {
	{ -0.70, -0.70, 0 }, { 0.70, -0.70, 0 }, { 0.70, 0.70, 0 }, { -0.70, 0.70, 0 }
};

float fanBase[8][3] = {
	{ -0.1, -0.2, 0.15 }, { 0.1, -0.2, 0.15 }, { 0.1, -0.2, -0.15 }, { -0.1, -0.2, -0.15 },
	{ -0.05, 0.5, 0.1 }, { 0.05, 0.5, 0.1 }, {0.05, 0.5, 0.02}, { -0.05, 0.5, 0.02 }
};

float fanBlade[4][3] = {
	{ -0.1, 0, 0.05 }, { 0.1, 0, -0.05 }, { 0.2, 0.5, -0.3 }, { -0.2, 0.5, 0.3 }
};


typedef struct{
	float x;
	float y;
	float z;
}POINT;

typedef struct{
	float red;
	float green;
	float blue;
}COLOR;
typedef struct{
	int a;
	const char * text;
}STRING;

typedef struct {
	float p1[3];
	float p2[3];
	float p3[3];
	float p4[3];
} RECTANGLE_P;

typedef struct {
	float posX;
	float posY;
	float posZ;
	float width;
	float height;
}RECTANGLE;

typedef struct{
	float posX;
	float posY;
	float posZ;
	float width;
	float height;
	float breadth;
}CUBE;


typedef struct {
	float radius;
	float posX;
	float posY;
	float transX;
	float transY;
	float transZ;
} CIRCLE;

typedef struct{
	POINT p1;
	POINT p2;
	POINT p3;
	POINT p4;
}CURVE;

typedef struct {
	float baseRadius;
	float topRadius;
	float height;
	float slices;
	float stacks;
}CYLINDER;
