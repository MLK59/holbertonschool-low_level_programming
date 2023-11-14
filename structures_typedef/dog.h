#ifndef DOG_H
#define DOG_H
/**
 * struct dog - caracterisée par name, age, owner.
 * @name: nom
 * @age: age
 * @owner: proprietaire
 */
struct dog
{
	char *name;
	float age;
	char *owner;

} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /** DOG_H */
