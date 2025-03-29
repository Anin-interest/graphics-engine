#pragma once
#include "vec3.h"
#include "tile.h"

struct Cur;
struct Bgr {
	dvec tl;
	double dep = 0;
	tile black;
	int w = 0, h = 0;

	bool hovered = false;
	bool wheeled = false;
	bool dragged_mid = false;
	bool dragged_right = false;

	Bgr(Cur& cur);
	drect vp() const { return { tl, w, h }; }
	void render(Cur& cur);

	void set_cm(Cur& cur);
	void Update(Cur& cur);
	void PreUpdate(Cur& cur);
};
