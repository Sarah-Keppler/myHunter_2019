/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** Header for ping pong ! Ping.. Pong.. ping .. pong
*/

#ifndef MY_CSFML_H_
#define MY_CSFML_H

typedef struct picture_s {
    sfTexture *texture;
    sfSprite *sprite;
} picture_t;


typedef struct bird_s {
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f position;
    sfVector2f size;
} bird_t;

typedef struct game_s {
    sfRenderWindow *window;
    sfEvent event;
    picture_t bg;
    sfVector2i mouse;
} game_t;


sfRenderWindow *createMyWindow(unsigned int, unsigned int, char *);

typedef struct s_framebuffer {
    unsigned char *pixels;
    unsigned int width;
    unsigned int height;
} t_framebuffer;
t_framebuffer *framebuffer_create(unsigned int, unsigned int);
t_framebuffer *framebuffer_destroy(t_framebuffer *);

#endif /* MY_CSFML_H */
