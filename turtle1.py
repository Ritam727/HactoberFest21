# -*- coding: utf-8 -*-
"""
Created on Fri Jul 30 17:52:46 2021

@author: SOUVICK MAZUMDAR
"""

import turtle
wn=turtle.Screen()
turtle.speed(0.5)
for i in range(30):
    turtle.circle(5*i)
    turtle.circle(-5*i)
    turtle.left(i)
turtle.done()