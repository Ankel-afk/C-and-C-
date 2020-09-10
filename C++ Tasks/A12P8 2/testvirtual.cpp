#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"
 /*                        Area
                        /      \
                    CIRCLE      Rectangle
                    /
                  Ring
 */
const int num_obj = 7;
int main() {
	Area *list[num_obj];						// (1) creating a pointer to an array of type Area with 6 elements
	int index = 0;
	double sum_perimeter = 0.0;							// (2) initialize an index for while loop later
	double sum_area = 0.0;						// (3)initialize sum of area at 0 to use in while loop
	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2);				// (4)
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
	Square white_square("WHITE", 10);
	list[0] = &blue_ring;						// (5)each element of list points to a different child of Area
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
	list[6] = &white_square;
	while (index < num_obj) {					// (7)iterate through list
		(list[index])->getColor();
		double area = list[index]->calcArea();// (8)index++ increases the value of index,
    //but returns the previous value, so it's basically iterating through the list.
    //after this we use the -> operator since we're using a pointer and call the
    //calcArea method for each element in the array.
		double perim = list[index++]->calcPerimeter();
		sum_perimeter+= perim;
		sum_area += area;
	}
	cout << "\nThe total area is "
			<< sum_area << " units " << endl;	// (9)
		cout << "\n The total perimeter is "
		<<sum_perimeter << "units" <<endl;
	return 0;
}
