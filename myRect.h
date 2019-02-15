#pragma once

typedef  unsigned int uint32_t; 

class Rect{
	int m_left, m_right, m_top, m_bottom;

	void Normal();
public:
	Rect(int m_left = 0, int m_right = 0,int m_top =0, int m_bottom =0);
	Rect(const Rect& other);

	void InflateRect(int d_l, int d_r, int d_t, int d_b);
	void InflateRect(int gor = 1, int vert = 1);

	void SetAll(int m_left = 0, int m_right = 0, int m_top = 0, int m_bottom = 0);
	void GetAll(int*);


};