// Demo of using struct pointers with functions
// Joanna Lin, October 2022

#include <stdio.h>
#include <string.h>

enum weapon { NO_WEAPON, BIG_SWORD, LITTLE_SWORD, WAND, FISH };
enum armor { NO_ARMOR, KNIGHT_ARMOR, MAGE_ROBES, OVERALLS };

struct party_member {
    char character_name[100];

    // Gear:
    enum weapon weapon;
    enum armor armor;
};

void print_party_member(struct party_member member);

void swap_gear(struct party_member *member1, struct party_member *member2);

int main (void) {
    struct party_member luigi;
    strcpy(luigi.character_name, "Luigi Mario");
    luigi.weapon = BIG_SWORD;
    luigi.armor = KNIGHT_ARMOR;

    struct party_member mario;
    strcpy(mario.character_name, "Mario Mario");
    mario.weapon = NO_WEAPON;
    mario.armor = OVERALLS;

    swap_gear(&luigi, &mario);

    print_party_member(luigi);
    print_party_member(mario);

}

// Swaps the weapon and armor of member1 and member2
void swap_gear(struct party_member *member1, struct party_member *member2) {
    enum armor temp_armor = member2->armor;
    enum weapon temp_weapon = member2->weapon;
    
    member2->armor = member1->armor;
    member2->weapon = member1->weapon;

    member1->armor = temp_armor;
    member1->weapon = temp_weapon;
}





/****************** UNIMPORTANT: just for printing ************************/

char *get_weapon_str(enum weapon weapon) {

    if (weapon == BIG_SWORD) {
        return "Big sword";
    } else if (weapon == LITTLE_SWORD) {
        return "Little sword";
    } else if (weapon == WAND) {
        return "Wand";
    } else if (weapon == FISH) {
        return "Fish";
    } else {
        return "No weapon";
    } 

}


char *get_armor_str(enum armor armor) {
    if (armor == KNIGHT_ARMOR) {
        return "Knight armor";
    } else if (armor == MAGE_ROBES) {
        return "Mage robes";
    } else if (armor == OVERALLS) {
        return "Overalls";
    } else {
        return "No armor";
    } 

}

void print_party_member(struct party_member member) {
    printf("%s\n", member.character_name);
    
    printf("weapon: %s\n", get_weapon_str(member.weapon));
    printf("armor:  %s\n\n", get_armor_str(member.armor));

}

