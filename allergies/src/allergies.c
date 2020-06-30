#include "allergies.h"

bool is_allergic_to(allergen_t allergen, unsigned int score)
{
  return ((1 << allergen) & score) > 0;
}

allergen_list_t get_allergens(unsigned int score)
{
  allergen_list_t allergen_list = {0};

  for (int i = 0; i < ALLERGEN_COUNT; i++)
  {
    if (is_allergic_to(i, score))
    {
      allergen_list.count++;
      allergen_list.allergens[i] = true;
    }
  }

  return allergen_list;
}
