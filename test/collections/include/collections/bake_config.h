/*
                                   )
                                  (.)
                                  .|.
                                  | |
                              _.--| |--._
                           .-';  ;`-'& ; `&.
                          \   &  ;    &   &_/
                           |"""---...---"""|
                           \ | | | | | | | /
                            `---.|.|.|.---'

 * This file is generated by bake.lang.c for your convenience. Headers of
 * dependencies will automatically show up in this file. Include bake_config.h
 * in your main project file. Do not edit! */

#ifndef COLLECTIONS_BAKE_CONFIG_H
#define COLLECTIONS_BAKE_CONFIG_H

/* Generated includes are specific to the bake environment. If a project is not
 * built with bake, it will have to provide alternative methods for including
 * its dependencies. */
/* Headers of public dependencies */
#include <flecs.h>
#include <bake_util.h>
#include <bake_test.h>

/* Headers of private dependencies */
#ifdef COLLECTIONS_IMPL
/* No dependencies */
#endif

/* Convenience macro for exporting symbols */
#ifndef COLLECTIONS_STATIC
  #if COLLECTIONS_IMPL && (defined(_MSC_VER) || defined(__MINGW32__))
    #define COLLECTIONS_EXPORT __declspec(dllexport)
  #elif COLLECTIONS_IMPL
    #define COLLECTIONS_EXPORT __attribute__((__visibility__("default")))
  #elif defined _MSC_VER
    #define COLLECTIONS_EXPORT __declspec(dllimport)
  #else
    #define COLLECTIONS_EXPORT
  #endif
#else
  #define COLLECTIONS_EXPORT
#endif

#endif
