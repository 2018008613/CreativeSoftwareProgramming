#include <iostream>
#include "draw_shape.h"
#include <vector>

using namespace std;

int main() {
	vector<Shape *> shapes;

	int cheight, cwidth;
	cin >> cheight >> cwidth;

	Canvas canvas(cheight, cwidth);
	canvas.Print();

	string cmd;
	while (true) {
		cin >> cmd;

		if (cmd == "quit") break;
		else if (cmd == "draw") {
			canvas.Print();
		}
		else if (cmd == "dump") {
			int count = 0;
			for (Shape *object : shapes)
			{
				cout << count << " ";
				object->printInfo();
				count++;
			}
		}
		else if (cmd == "delete") {
			int num;
			cin >> num;
			if (num < shapes.size())
				shapes.erase(shapes.begin() + num);
			canvas.Clear();
			for (Shape *object : shapes)
				object->Draw(&canvas);
		}
		else if (cmd == "resize") {
			cin >> cheight >> cwidth;
			canvas.Resize(cheight, cwidth);
			for (Shape *object : shapes)
				object->Draw(&canvas);
		}
		else if (cmd == "add") {
			string type;
			int x, y;
			char brush;
			cin >> type >> x >> y;

			if (type == "rect") {
				int h, w;
				cin >> h >> w >> brush;
				Rectangle rec(x, y, h, w, brush);
				rec.Draw(&canvas);
				shapes.push_back(new Rectangle(x, y, h, w, brush));
			}
			else if (type == "tri_up") {
				int height;
				cin >> height >> brush;
				UpTriangle upt(x, y, height, brush);
				upt.Draw(&canvas);
				shapes.push_back(new UpTriangle(x, y, height, brush));
			}
			else if (type == "tri_down") {
				int height;
				cin >> height >> brush;
				DownTriangle dnt(x, y, height, brush);
				dnt.Draw(&canvas);
				shapes.push_back(new DownTriangle(x, y, height, brush));
			}
			else if (type == "diamond") {
				int height;
				cin >> height >> brush;
				Diamond dia(x, y, height, brush);
				dia.Draw(&canvas);
				shapes.push_back(new Diamond(x, y, height, brush));
			}
		}
	}
	for (Shape *object : shapes)
		delete object;
	return 0;
}
