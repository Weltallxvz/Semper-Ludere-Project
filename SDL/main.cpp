//
//  main.m
//  SDL
//
//  Created by Pierre Pagnoux on 01/07/12.
//  Copyright (c) 2012. All rights reserved.
//

#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>

int SDL_main (int argc, char **argv)
{
    SDL_Init(SDL_INIT_VIDEO);
    SDL_SetVideoMode(460, 300, 32, SDL_SWSURFACE);
    
    int continuer = 1;
    SDL_Event event;
    
    while (continuer)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
                continuer = 0;
        }
    }
    
    return EXIT_SUCCESS;
}



