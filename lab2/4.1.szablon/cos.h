// Dane w formacie dwu-wymiarowym
constexpr int numTriangles = 9;
constexpr int numVertices = 27;

// wspolrzedne wierzcholkow
GLfloat vertices[27*2] =
{
	0.540000, 0.290909,
	0.000000, 0.650909,
	-0.540000,0.290909,

	-0.540000, -0.249091,
	-0.600000, -0.309091,
	 0.600000, -0.309091,

	-0.540000, -0.249091,
	0.600000, -0.309091,
	0.540000, -0.249091,

	-0.600000, 0.350909,
	-0.600000, 0.290909,
	-0.540000, 0.290909,

	-0.540000, 0.290909,
	-0.540000, -0.249091,
	0.540000, -0.249091,

	0.540000, 0.290909,
	 0.600000, 0.290909,
	 0.600000, 0.350909,

	-0.540000, 0.290909,
	0.540000, -0.249091,
	0.540000, 0.290909,

	0.000000, 0.650909,
	-0.600000, 0.350909,
	-0.540000, 0.290909,

	0.540000, 0.290909,
	0.600000, 0.350909,
	0.000000, 0.650909,
};

// kolory wierzcholkow
GLfloat colors[27*3] =
{
	1.0, 0.0, 0.0,
	1.0, 0.0, 0.0,
	1.0, 0.0, 0.0,

	0.0, 1.0, 0.0,
	0.0, 1.0, 0.0,
	0.0, 1.0, 0.0,

	1.0, 0.0, 1.0,
	1.0, 0.0, 1.0,
	1.0, 0.0, 1.0,

	1.0, 1.0, 0.0,
	1.0, 1.0, 0.0,
	1.0, 1.0, 0.0,

	0.0, 1.0, 1.0,
	0.0, 1.0, 1.0,
	0.0, 1.0, 1.0,

	1.0, 0.0, 0.0,
	1.0, 0.0, 0.0,
	1.0, 0.0, 0.0,

	1.0, 1.0, 0.0,
	1.0, 1.0, 0.0,
	1.0, 1.0, 0.0,

	0.0, 0.0, 0.0,
	0.0, 0.0, 0.0,
	0.0, 0.0, 0.0,

	1.0, 0.0, 1.0,
	1.0, 0.0, 1.0,
	1.0, 0.0, 1.0
};
