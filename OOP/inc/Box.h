/*
 * Box.h
 *
 *  Created on: Apr 5, 2017
 *      Author: udotson
 */

#ifndef BOX_H_
#define BOX_H_

/**
 *  \brief This is box and it does something
 */
class Box {
public:
	Box(double lv = 1.0, double bv = 1.0, double hv = 1.0);
	virtual ~Box();  //I made the destructors virtual Why????

	void setLength(double);
	int getId() const;
	double getBreadth() const;
	double getHeight() const;
	double getLength() const;

	double calcVolume();
	void setBreadth(double breadth);
	void setHeight(double height);
	void setId(int id);

private:
	double length;
	double breadth;
	double height;
	int id;

};

#endif /* BOX_H_ */
