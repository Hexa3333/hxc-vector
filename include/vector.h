#include <stdint.h>
#include <math.h>

#define HXC_VECTOR_INLINE inline extern

typedef struct _hxcmath_vec2i
{
    int32_t x,y;
} vec2i;

typedef struct _hxcmath_vec3i
{
    int32_t x,y,z;
} vec3i;

typedef struct _hxcmath_vec2f
{
    float x,y;
} vec2f;

typedef struct _hxcmath_vec3f
{
    float x,y,z;
} vec3f;

const static vec2i VEC2I_IDENTITY = { 1, 1 };
const static vec2f VEC2F_IDENTITY = { 1.0f, 1.0f};
const static vec3i VEC3I_IDENTITY ={ 1, 1, 1 };
const static vec3f VEC3F_IDENTITY = { 1.0f, 1.0f, 1.0f};

const static vec2i VEC2I_ZERO = { 0, 0 };
const static vec2f VEC2F_ZERO = { 0.0f, 0.0f };
const static vec3i VEC3I_ZERO = { 0, 0, 0 };
const static vec3f VEC3F_ZERO = { 0.0f, 0.0f, 0.0f};

/////////////////////////////////////////////////
/////////////// FUNCTIONS //////////////////////

HXC_VECTOR_INLINE void vec2i_add(vec2i* dest, vec2i a, vec2i b)
{
    dest->x = a.x + b.x;
    dest->y = a.y + b.y;
}
HXC_VECTOR_INLINE void vec2i_adds(vec2i* dest, vec2i a, int32_t b)
{
    dest->x = a.x + b;
    dest->y = a.y + b;
}
HXC_VECTOR_INLINE vec2i vec2i_addr(vec2i a, vec2i b)
{
    return (vec2i){a.x + b.x , a.y + b.y};
}
HXC_VECTOR_INLINE vec2i vec2i_addsr(vec2i a, int32_t b)
{
    return (vec2i){a.x + b , a.y + b};
}


HXC_VECTOR_INLINE void vec2i_sub(vec2i* dest, vec2i a, vec2i b)
{
    dest->x = a.x - b.x;
    dest->y = a.y - b.y;
}
HXC_VECTOR_INLINE void vec2i_subs(vec2i* dest, vec2i a, int32_t b)
{
    dest->x = a.x - b;
    dest->y = a.y - b;
}
HXC_VECTOR_INLINE vec2i vec2i_subr(vec2i a, vec2i b)
{
    return (vec2i){a.x - b.x , a.y - b.y};
}
HXC_VECTOR_INLINE vec2i vec2i_subsr(vec2i a, int32_t b)
{
    return (vec2i){a.x - b , a.y - b};
}


HXC_VECTOR_INLINE void vec2i_mul(vec2i* dest, vec2i a, vec2i b)
{
    dest->x = a.x * b.x;
    dest->y = a.y * b.y;
}
HXC_VECTOR_INLINE void vec2i_muls(vec2i* dest, vec2i a, int32_t b)
{
    dest->x = a.x * b;
    dest->y = a.y * b;
}
HXC_VECTOR_INLINE vec2i vec2i_mulr(vec2i a, vec2i b)
{
    return (vec2i){a.x * b.x , a.y * b.y};
}
HXC_VECTOR_INLINE vec2i vec2i_mulsr(vec2i a, int32_t b)
{
    return (vec2i){a.x * b , a.y * b};
}


HXC_VECTOR_INLINE void vec2i_div(vec2i* dest, vec2i a, vec2i b)
{
    dest->x = a.x / b.x;
    dest->y = a.y / b.y;
}
HXC_VECTOR_INLINE void vec2i_divs(vec2i* dest, vec2i a, int32_t b)
{
    dest->x = a.x / b;
    dest->y = a.y / b;
}
HXC_VECTOR_INLINE vec2i vec2i_divr(vec2i a, vec2i b)
{
    return (vec2i){a.x / b.x , a.y / b.y};
}
HXC_VECTOR_INLINE vec2i vec2i_divsr(vec2i a, int32_t b)
{
    return (vec2i){a.x / b , a.y / b};
}


HXC_VECTOR_INLINE void vec2f_add(vec2f* dest, vec2f a, vec2f b)
{
    dest->x = a.x + b.x;
    dest->y = a.y + b.y;
}
HXC_VECTOR_INLINE void vec2f_adds(vec2f* dest, vec2f a, float b)
{
    dest->x = a.x + b;
    dest->y = a.y + b;
}
HXC_VECTOR_INLINE vec2f vec2f_addr(vec2f a, vec2f b)
{
    return (vec2f){a.x + b.x , a.y + b.y};
}
HXC_VECTOR_INLINE vec2f vec2f_addsr(vec2f a, float b)
{
    return (vec2f){a.x + b , a.y + b};
}


HXC_VECTOR_INLINE void vec2f_sub(vec2f* dest, vec2f a, vec2f b)
{
    dest->x = a.x - b.x;
    dest->y = a.y - b.y;
}
HXC_VECTOR_INLINE void vec2f_subs(vec2f* dest, vec2f a, float b)
{
    dest->x = a.x - b;
    dest->y = a.y - b;
}
HXC_VECTOR_INLINE vec2f vec2f_subr(vec2f a, vec2f b)
{
    return (vec2f){a.x - b.x , a.y - b.y};
}
HXC_VECTOR_INLINE vec2f vec2f_subsr(vec2f a, float b)
{
    return (vec2f){a.x - b , a.y - b};
}


HXC_VECTOR_INLINE void vec2f_mul(vec2f* dest, vec2f a, vec2f b)
{
    dest->x = a.x * b.x;
    dest->y = a.y * b.y;
}
HXC_VECTOR_INLINE void vec2f_muls(vec2f* dest, vec2f a, float b)
{
    dest->x = a.x * b;
    dest->y = a.y * b;
}
HXC_VECTOR_INLINE vec2f vec2f_mulr(vec2f a, vec2f b)
{
    return (vec2f){a.x * b.x , a.y * b.y};
}
HXC_VECTOR_INLINE vec2f vec2f_mulsr(vec2f a, float b)
{
    return (vec2f){a.x * b , a.y * b};
}


HXC_VECTOR_INLINE void vec2f_div(vec2f* dest, vec2f a, vec2f b)
{
    dest->x = a.x / b.x;
    dest->y = a.y / b.y;
}
HXC_VECTOR_INLINE void vec2f_divs(vec2f* dest, vec2f a, float b)
{
    dest->x = a.x / b;
    dest->y = a.y / b;
}
HXC_VECTOR_INLINE vec2f vec2f_divr(vec2f a, vec2f b)
{
    return (vec2f){a.x / b.x , a.y / b.y};
}
HXC_VECTOR_INLINE vec2f vec2f_divsr(vec2f a, float b)
{
    return (vec2f){a.x / b , a.y / b};
}


HXC_VECTOR_INLINE void vec3i_add(vec3i* dest, vec3i a, vec3i b)
{
    dest->x = a.x + b.x;
    dest->y = a.y + b.y;
    dest->z = a.z + b.z;
}
HXC_VECTOR_INLINE void vec3i_adds(vec3i* dest, vec3i a, int32_t b)
{
    dest->x = a.x + b;
    dest->y = a.y + b;
    dest->z = a.z + b;
}
HXC_VECTOR_INLINE vec3i vec3i_addr(vec3i a, vec3i b)
{
    return (vec3i){a.x + b.x , a.y + b.y , a.z + b.z};
}
HXC_VECTOR_INLINE vec3i vec3i_addsr(vec3i a, int32_t b)
{
    return (vec3i){a.x + b , a.y + b , a.z + b};
}


HXC_VECTOR_INLINE void vec3i_sub(vec3i* dest, vec3i a, vec3i b)
{
    dest->x = a.x - b.x;
    dest->y = a.y - b.y;
    dest->z = a.z - b.z;
}
HXC_VECTOR_INLINE void vec3i_subs(vec3i* dest, vec3i a, int32_t b)
{
    dest->x = a.x - b;
    dest->y = a.y - b;
    dest->z = a.z - b;
}
HXC_VECTOR_INLINE vec3i vec3i_subr(vec3i a, vec3i b)
{
    return (vec3i){a.x - b.x , a.y - b.y , a.z - b.z};
}
HXC_VECTOR_INLINE vec3i vec3i_subsr(vec3i a, int32_t b)
{
    return (vec3i){a.x - b , a.y - b , a.z - b};
}


HXC_VECTOR_INLINE void vec3i_mul(vec3i* dest, vec3i a, vec3i b)
{
    dest->x = a.x * b.x;
    dest->y = a.y * b.y;
    dest->z = a.z * b.z;
}
HXC_VECTOR_INLINE void vec3i_muls(vec3i* dest, vec3i a, int32_t b)
{
    dest->x = a.x * b;
    dest->y = a.y * b;
    dest->z = a.z * b;
}
HXC_VECTOR_INLINE vec3i vec3i_mulr(vec3i a, vec3i b)
{
    return (vec3i){a.x * b.x , a.y * b.y , a.z * b.z};
}
HXC_VECTOR_INLINE vec3i vec3i_mulsr(vec3i a, int32_t b)
{
    return (vec3i){a.x * b , a.y * b , a.z * b};
}


HXC_VECTOR_INLINE void vec3i_div(vec3i* dest, vec3i a, vec3i b)
{
    dest->x = a.x / b.x;
    dest->y = a.y / b.y;
    dest->z = a.z / b.z;
}
HXC_VECTOR_INLINE void vec3i_divs(vec3i* dest, vec3i a, int32_t b)
{
    dest->x = a.x / b;
    dest->y = a.y / b;
    dest->z = a.z / b;
}
HXC_VECTOR_INLINE vec3i vec3i_divr(vec3i a, vec3i b)
{
    return (vec3i){a.x / b.x , a.y / b.y , a.z / b.z};
}
HXC_VECTOR_INLINE vec3i vec3i_divsr(vec3i a, int32_t b)
{
    return (vec3i){a.x / b , a.y / b , a.z / b};
}


HXC_VECTOR_INLINE void vec3f_add(vec3f* dest, vec3f a, vec3f b)
{
    dest->x = a.x + b.x;
    dest->y = a.y + b.y;
    dest->z = a.z + b.z;
}
HXC_VECTOR_INLINE void vec3f_adds(vec3f* dest, vec3f a, float b)
{
    dest->x = a.x + b;
    dest->y = a.y + b;
    dest->z = a.z + b;
}
HXC_VECTOR_INLINE vec3f vec3f_addr(vec3f a, vec3f b)
{
    return (vec3f){a.x + b.x , a.y + b.y , a.z + b.z};
}
HXC_VECTOR_INLINE vec3f vec3f_addsr(vec3f a, float b)
{
    return (vec3f){a.x + b , a.y + b , a.z + b};
}


HXC_VECTOR_INLINE void vec3f_sub(vec3f* dest, vec3f a, vec3f b)
{
    dest->x = a.x - b.x;
    dest->y = a.y - b.y;
    dest->z = a.z - b.z;
}
HXC_VECTOR_INLINE void vec3f_subs(vec3f* dest, vec3f a, float b)
{
    dest->x = a.x - b;
    dest->y = a.y - b;
    dest->z = a.z - b;
}
HXC_VECTOR_INLINE vec3f vec3f_subr(vec3f a, vec3f b)
{
    return (vec3f){a.x - b.x , a.y - b.y , a.z - b.z};
}
HXC_VECTOR_INLINE vec3f vec3f_subsr(vec3f a, float b)
{
    return (vec3f){a.x - b , a.y - b , a.z - b};
}


HXC_VECTOR_INLINE void vec3f_mul(vec3f* dest, vec3f a, vec3f b)
{
    dest->x = a.x * b.x;
    dest->y = a.y * b.y;
    dest->z = a.z * b.z;
}
HXC_VECTOR_INLINE void vec3f_muls(vec3f* dest, vec3f a, float b)
{
    dest->x = a.x * b;
    dest->y = a.y * b;
    dest->z = a.z * b;
}
HXC_VECTOR_INLINE vec3f vec3f_mulr(vec3f a, vec3f b)
{
    return (vec3f){a.x * b.x , a.y * b.y , a.z * b.z};
}
HXC_VECTOR_INLINE vec3f vec3f_mulsr(vec3f a, float b)
{
    return (vec3f){a.x * b , a.y * b , a.z * b};
}

HXC_VECTOR_INLINE void vec3f_div(vec3f* dest, vec3f a, vec3f b)
{
    dest->x = a.x / b.x;
    dest->y = a.y / b.y;
    dest->z = a.z / b.z;
}
HXC_VECTOR_INLINE void vec3f_divs(vec3f* dest, vec3f a, float b)
{
    dest->x = a.x / b;
    dest->y = a.y / b;
    dest->z = a.z / b;
}
HXC_VECTOR_INLINE vec3f vec3f_divr(vec3f a, vec3f b)
{
    return (vec3f){a.x / b.x , a.y / b.y , a.z / b.z};
}
HXC_VECTOR_INLINE vec3f vec3f_divsr(vec3f a, float b)
{
    return (vec3f){a.x / b , a.y / b , a.z / b};
}

inline static int32_t hxc_sqni(int32_t n){ return n*n; }
inline static float hxc_sqnf(float n){ return n*n; }

//////////////////// MAGNITUDE /////////////////////////
HXC_VECTOR_INLINE int32_t vec2i_magnitude(vec2i a)
{
    return sqrt(hxc_sqni(a.x) + hxc_sqni(a.y));
}
HXC_VECTOR_INLINE float vec2f_magnitude(vec2f a)
{
    return sqrt(hxc_sqnf(a.x) + hxc_sqnf(a.y));
}

HXC_VECTOR_INLINE int32_t vec3i_magnitude(vec3i a)
{
    return sqrt(hxc_sqni(a.x) + hxc_sqni(a.y) + hxc_sqni(a.z));
}
HXC_VECTOR_INLINE float vec3f_magnitude(vec3f a)
{
    return sqrt(hxc_sqnf(a.x) + hxc_sqnf(a.y) + hxc_sqnf(a.z));
}

//////////////////// DISTANCE //////////////////////////

HXC_VECTOR_INLINE int32_t vec2i_distance(vec2i a, vec2i b)
{
    return sqrt(hxc_sqni(a.x - b.x)  +  hxc_sqni(a.y - b.y));
}
HXC_VECTOR_INLINE float vec2f_distance(vec2f a, vec2f b)
{
    return sqrt(hxc_sqni(a.x - b.x) + hxc_sqni(a.y - b.y));
}

HXC_VECTOR_INLINE int32_t vec3i_distance(vec3i a, vec3i b)
{
    return sqrt(hxc_sqni(a.x - b.x) + hxc_sqni(a.y - b.y) + hxc_sqni(a.z - b.z));
}
HXC_VECTOR_INLINE float vec3f_distance(vec3f a, vec3f b)
{
    return sqrt(hxc_sqnf(a.x - b.x) + hxc_sqnf(a.y - b.y) + hxc_sqnf(a.z - b.z));
}