/*
  cpgf Library
  Copyright (C) 2011 - 2013 Wang Qi http://www.cpgf.org/
  All rights reserved.

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
*/


#ifndef __SPRITE_H
#define __SPRITE_H

#include "wx/dc.h"

const int SpriteBoardSize = 500;

class Sprite
{
public:
	// use int instead of enum so we can tween the shape
	static const int ssSphere = 0;
	static const int ssTeapot = 1;

public:
	Sprite();
	
	void setX(int x);
	int getX() const;
	void setY(int y);
	int getY() const;
	void setZ(int z);
	int getZ() const;
	void setRotate(float rotate);
	float getRotate() const;
	void setSize(int size);
	int getSize() const;
	void setColor(unsigned int color);
	unsigned int getColor() const;
	void setAlpha(float alpha);
	float getAlpha() const;
	void setVisible(bool visible);
	bool getVisible() const;

	void setShape(int shape);
	int getShape() const;

	void render(int viewWidth, int viewHeight);

private:
	int x;
	int y;
	int z;
	int size;
	float rotate;
	unsigned int color;
	float alpha;
	bool visible;
	int shape;
};


#endif
