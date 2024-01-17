#include "Object.h"

Object cube(3, {{-1.0f, -1.0f, -1.0f}, {-1.0f, -1.0f,  1.0f},
                { 1.0f, -1.0f, -1.0f}, {-1.0f,  1.0f, -1.0f}, 
                {-1.0f,  1.0f,  1.0f}, { 1.0f, -1.0f,  1.0f},
                { 1.0f,  1.0f, -1.0f}, { 1.0f,  1.0f,  1.0f}},
  
               {{0, 1}, {0, 2}, {0, 3}, 
                {2, 5}, {3, 6}, {3, 4}, 
                {4, 7}, {6, 7}, {7, 5}, 
                {5, 1}, {4, 1}, {2, 6}});


Object pyramid(3, {{-1.0f, -1.0f, -1.0f}, {-1.0f, -1.0f, 1.0f},
                   { 1.0f, -1.0f, -1.0f}, { 1.0f, -1.0f, 1.0f},
                   { 0.0f, 1.0f, 0.0f}},     
  
                  {{0, 1}, {0, 2}, {1, 3}, 
                   {2, 3}, {0, 4}, {1, 4},
                   {2, 4}, {3, 4}});

Object tesseract(4, {{-1.0f, -1.0f, -1.0f, -1.0f}, {-1.0f, -1.0f,  1.0f, -1.0f},
                     { 1.0f, -1.0f, -1.0f, -1.0f}, {-1.0f,  1.0f, -1.0f, -1.0f}, 
                     {-1.0f,  1.0f,  1.0f, -1.0f}, { 1.0f, -1.0f,  1.0f, -1.0f},
                     { 1.0f,  1.0f, -1.0f, -1.0f}, { 1.0f,  1.0f,  1.0f, -1.0f},

                     {-1.0f, -1.0f, -1.0f, 1.0f}, {-1.0f, -1.0f,  1.0f, 1.0f},
                     { 1.0f, -1.0f, -1.0f, 1.0f}, {-1.0f,  1.0f, -1.0f, 1.0f}, 
                     {-1.0f,  1.0f,  1.0f, 1.0f}, { 1.0f, -1.0f,  1.0f, 1.0f},
                     { 1.0f,  1.0f, -1.0f, 1.0f}, { 1.0f,  1.0f,  1.0f, 1.0f}},
  
                    {{0, 1}, {0, 2}, {0, 3}, 
                     {2, 5}, {3, 6}, {3, 4}, 
                     {4, 7}, {6, 7}, {7, 5}, 
                     {5, 1}, {4, 1}, {2, 6},
                     
                     {8, 9}, {8, 10}, {8, 11}, 
                     {10, 13}, {11, 14}, {11, 12}, 
                     {12, 15}, {14, 15}, {15, 13}, 
                     {13, 9}, {12, 9}, {10, 14},
                     
                     {0,8},{1,9},{2,10},{3,11},{4,12},{5,13},{6,14},{7,15}});
/*
Object penteract(5, {{-1.0f, -1.0f, -1.0f, -1.0f, -1.0f}, {-1.0f, -1.0f,  1.0f, -1.0f, -1.0f},
                     { 1.0f, -1.0f, -1.0f, -1.0f, -1.0f}, {-1.0f,  1.0f, -1.0f, -1.0f, -1.0f}, 
                     {-1.0f,  1.0f,  1.0f, -1.0f, -1.0f}, { 1.0f, -1.0f,  1.0f, -1.0f, -1.0f},
                     { 1.0f,  1.0f, -1.0f, -1.0f, -1.0f}, { 1.0f,  1.0f,  1.0f, -1.0f, -1.0f},
                     {-1.0f, -1.0f, -1.0f,  1.0f, -1.0f}, {-1.0f, -1.0f,  1.0f,  1.0f, -1.0f},
                     { 1.0f, -1.0f, -1.0f,  1.0f, -1.0f}, {-1.0f,  1.0f, -1.0f,  1.0f, -1.0f}, 
                     {-1.0f,  1.0f,  1.0f,  1.0f, -1.0f}, { 1.0f, -1.0f,  1.0f,  1.0f, -1.0f},
                     { 1.0f,  1.0f, -1.0f,  1.0f, -1.0f}, { 1.0f,  1.0f,  1.0f,  1.0f, -1.0f},
                     
                     {-1.0f, -1.0f, -1.0f, -1.0f,  1.0f}, {-1.0f, -1.0f,  1.0f, -1.0f,  1.0f},
                     { 1.0f, -1.0f, -1.0f, -1.0f,  1.0f}, {-1.0f,  1.0f, -1.0f, -1.0f,  1.0f}, 
                     {-1.0f,  1.0f,  1.0f, -1.0f,  1.0f}, { 1.0f, -1.0f,  1.0f, -1.0f,  1.0f},
                     { 1.0f,  1.0f, -1.0f, -1.0f,  1.0f}, { 1.0f,  1.0f,  1.0f, -1.0f,  1.0f},
                     {-1.0f, -1.0f, -1.0f,  1.0f,  1.0f}, {-1.0f, -1.0f,  1.0f,  1.0f,  1.0f},
                     { 1.0f, -1.0f, -1.0f,  1.0f,  1.0f}, {-1.0f,  1.0f, -1.0f,  1.0f,  1.0f}, 
                     {-1.0f,  1.0f,  1.0f,  1.0f,  1.0f}, { 1.0f, -1.0f,  1.0f,  1.0f,  1.0f},
                     { 1.0f,  1.0f, -1.0f,  1.0f,  1.0f}, { 1.0f,  1.0f,  1.0f,  1.0f,  1.0f}},
  
                    {{0, 1}, {0, 2}, {0, 3}, 
                     {2, 5}, {3, 6}, {3, 4}, 
                     {4, 7}, {6, 7}, {7, 5}, 
                     {5, 1}, {4, 1}, {2, 6},
                     
                     {8, 9}, {8, 10}, {8, 11}, 
                     {10, 13}, {11, 14}, {11, 12}, 
                     {12, 15}, {14, 15}, {15, 13}, 
                     {13, 9}, {12, 9}, {10, 14},
                     
                     {0,8},{1,9},{2,10},{3,11},{4,12},{5,13},{6,14},{7,15}});
                     */

