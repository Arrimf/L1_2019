#include "myRect.h"


void Rect::Normal(){
	if (m_left > m_right) {
		int tmp = m_left;
		m_left = m_right;
		m_right = tmp;
	}

	if (m_top > m_bottom) {
		int tmp = m_top;
		m_top = m_bottom;
		m_bottom = tmp;
	}

}

Rect::Rect(int m_left, int m_right, int m_top, int m_bottom) {
	if (m_left > m_right) {
		this->m_left = m_right;
		this->m_right = m_left;
	}
	else {
		this->m_left = m_left;
		this->m_right = m_right;
	}
	if (m_top > m_bottom) {
		this->m_top = m_bottom;
		this->m_bottom = m_top;
	}
	else {
		this->m_top = m_top;
		this->m_bottom = m_bottom;
	}
}

Rect::Rect(const Rect & other){
	m_left = other.m_left;
	m_right = other.m_right;
	m_top = other.m_top;
	m_bottom = other.m_bottom;

}

void Rect::InflateRect(int d_l, int d_r, int d_t, int d_b){
	m_left -= d_l;
	m_right += d_r;
	m_top -= d_t;
	m_bottom += d_b;
	Normal();
}

void Rect::InflateRect(int gor, int vert){
	
	if (gor & 0x1) {
		m_right += 0x1;
	}
	m_left -= (gor >> 1);
	m_right += (gor >> 1);

	if (vert & 0x1) {
		m_bottom += 0x1;
	}
	m_top -= (vert >> 1);
	m_bottom += (vert >> 1);
	Normal();
}

void Rect::SetAll(int m_left, int m_right, int m_top, int m_bottom){
	if (m_left > m_right) {
		this->m_left = m_right;
		this->m_right = m_left;
	}
	else {
		this->m_left = m_left;
		this->m_right = m_right;
	}
	if (m_top > m_bottom) {
		this->m_top = m_bottom;
		this->m_bottom = m_top;
	}
	else {
		this->m_top = m_top;
		this->m_bottom = m_bottom;
	}

}

void Rect::GetAll(int *) {
	*vals[0] = m_left;
	*vals[1] = m_right;
	*vals[2] = m_top;
	*vals[3] = m_bottom;

}


