# HXC Vector Library
#### HXC Vector is a simple header only inline c vector library for mathematics, relying only on standart c math.

Suffix 'r' for functions that return values.
Suffix 's' for working with a vector and scalar value.
##### Examples: 
```c
vec2f_add(vec2f* destination, vec2f a, vec2f b); // writes the resulting vector to destination
vec2f_addr(vec2f a, vec2f b); // returns the resulting vector
```
```c
vec3i_mulr(vec3i a, vec3i b);
vec3i_mulrs(vec3i a, int b);
```

## Features