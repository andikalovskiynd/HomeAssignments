/* Author: Andikalovskiy Nikita
    e-mail: st131335@student.spbu.ru
    Assignment4: Extended 3rd assignment
 */

#include <gtest/gtest.h>
#include "Autobot.h"
#include "Decepticon.h"
#include "Maximus.h"

TEST(AutobotTest, ConstructorAndOutput) {
    Weapon weapon("Blaster", 100);
    Energy energy("Energon");
    Autobot autobot("Optimus", "Autobot", 500, weapon, &energy, "Bumblebee", 10);

    std::ostringstream os;
    os << autobot;
    EXPECT_EQ(os.str(), "Autobot. Name: Optimus, Type: Autobot, Strength: 500, Friend: Bumblebee, Beauty: 10)");
}

TEST(ComparisonTest, TransformerComparison) {
    Weapon weapon("Blaster", 100);
    Energy energy("Energon");
    Transformer t1("Optimus", "Autobot", 500, weapon, &energy);
    Transformer t2("Megatron", "Decepticon", 600, weapon, &energy);
    Transformer t3("Bumblebee", "Autobot", 500, weapon, &energy);

    EXPECT_TRUE(t1 <= t2);
    EXPECT_TRUE(t2 >= t1);
    EXPECT_TRUE(t1 <= t3);
    EXPECT_TRUE(t1 >= t3);
}

//comparing Autobot
TEST(ComparisonTest, AutobotComparison) {
    Weapon weapon("Blaster", 100);
    Energy energy("Energon");
    Autobot a1("Optimus", "Autobot", 500, weapon, &energy, "Bumblebee", 10);
    Autobot a2("Bumblebee", "Autobot", 500, weapon, &energy, "Optimus", 15);
    Autobot a3("Cliffjumper", "Autobot", 400, weapon, &energy, "Optimus", 5);

    EXPECT_TRUE(a1 <= a2);
    EXPECT_TRUE(a2 >= a1);
    EXPECT_TRUE(a3 <= a1);
    EXPECT_FALSE(a1 <= a3);
}

TEST(ComparisonTest, DecepticonComparison) {
    Weapon weapon("Cannon", 150);
    Energy energy("Dark Energon");
    Decepticon d1("Megatron", "Decepticon", 600, weapon, &energy, "Optimus", 200);
    Decepticon d2("Starscream", "Decepticon", 600, weapon, &energy, "Optimus", 100);
    Decepticon d3("Soundwave", "Decepticon", 500, weapon, &energy, "Optimus", 50);

    EXPECT_TRUE(d2 <= d1);
    EXPECT_TRUE(d1 >= d2);
    EXPECT_TRUE(d3 <= d1);
    EXPECT_FALSE(d1 <= d3);
}

TEST(ComparisonTest, MaximusComparison) {
    Weapon weapon("Sword", 80);
    Energy energy("Light Energon");
    Maximus m1("Maximus", "Autobot", 700, weapon, &energy, "Fire", 80);
    Maximus m2("Maximus Prime", "Autobot", 700, weapon, &energy, "Ice", 100);
    Maximus m3("Sentinel", "Autobot", 600, weapon, &energy, "Ice", 60);

    EXPECT_TRUE(m1 <= m2);
    EXPECT_TRUE(m2 >= m1);
    EXPECT_TRUE(m3 <= m1);
    EXPECT_FALSE(m1 <= m3);
}

TEST(ConstructorTest, TransformerDefaultConstructor) {
    Transformer t;
    EXPECT_EQ(t.getName(), "Default");
    EXPECT_EQ(t.getType(), "Unknown");
    EXPECT_EQ(t.getStrength(), 0);
    EXPECT_EQ(t.getWeapon().getType(), "Default");
    EXPECT_EQ(t.getWeapon().getPower(), 0);
    EXPECT_EQ(t.useEnergySource(), "Using energy source Unknown");
}

TEST(ConstructorTest, TransformerPartialConstructor) {
    Transformer t("Optimus", "Autobot");
    EXPECT_EQ(t.getName(), "Optimus");
    EXPECT_EQ(t.getType(), "Autobot");
    EXPECT_EQ(t.getStrength(), 0);
    EXPECT_EQ(t.getWeapon().getType(), "Default");
    EXPECT_EQ(t.getWeapon().getPower(), 0);
    EXPECT_EQ(t.useEnergySource(), "Using energy source Unknown");
}

TEST(ConstructorTest, TransformerFullConstructor) {
    Weapon weapon("Blaster", 100);
    Energy energy("Energon");
    Transformer t("Optimus", "Autobot", 500, weapon, &energy);
    EXPECT_EQ(t.getName(), "Optimus");
    EXPECT_EQ(t.getType(), "Autobot");
    EXPECT_EQ(t.getStrength(), 500);
    EXPECT_EQ(t.getWeapon().getType(), "Blaster");
    EXPECT_EQ(t.getWeapon().getPower(), 100);
    EXPECT_EQ(t.useEnergySource(), "Using energy source Energon");
}

TEST(ConstructorTest, AutobotDefaultConstructor) {
    Autobot a;
    EXPECT_EQ(a.getName(), "Default");
    EXPECT_EQ(a.getType(), "Autobot");
    EXPECT_EQ(a.getStrength(), 0);
    EXPECT_EQ(a.getFriend(), "Unknown");
    EXPECT_EQ(a.getBeauty(), 0);
}

TEST(ConstructorTest, AutobotPartialConstructor) {
    Autobot a("Bumblebee", "Autobot");
    EXPECT_EQ(a.getName(), "Bumblebee");
    EXPECT_EQ(a.getType(), "Autobot");
    EXPECT_EQ(a.getStrength(), 0);
    EXPECT_EQ(a.getFriend(), "Unknown");
    EXPECT_EQ(a.getBeauty(), 0);
}

TEST(ConstructorTest, AutobotFullConstructor) {
    Weapon weapon("Blaster", 100);
    Energy energy("Energon");
    Autobot a("Optimus", "Autobot", 500, weapon, &energy, "Bumblebee", 10);
    EXPECT_EQ(a.getName(), "Optimus");
    EXPECT_EQ(a.getType(), "Autobot");
    EXPECT_EQ(a.getStrength(), 500);
    EXPECT_EQ(a.getFriend(), "Bumblebee");
    EXPECT_EQ(a.getBeauty(), 10);
}

TEST(ConstructorTest, DecepticonDefaultConstructor) {
    Decepticon d;
    EXPECT_EQ(d.getName(), "Default");
    EXPECT_EQ(d.getType(), "Decepticon");
    EXPECT_EQ(d.getStrength(), 0);
    EXPECT_EQ(d.getTarget(), "Unknown");
    EXPECT_EQ(d.getDamage(), 0);
}

TEST(ConstructorTest, DecepticonPartialConstructor) {
    Decepticon d("Starscream", "Decepticon");
    EXPECT_EQ(d.getName(), "Starscream");
    EXPECT_EQ(d.getType(), "Decepticon");
    EXPECT_EQ(d.getStrength(), 0);
    EXPECT_EQ(d.getTarget(), "Unknown");
    EXPECT_EQ(d.getDamage(), 0);
}

TEST(ConstructorTest, DecepticonFullConstructor) {
    Weapon weapon("Cannon", 150);
    Energy energy("Dark Energon");
    Decepticon d("Megatron", "Decepticon", 600, weapon, &energy, "Optimus", 200);
    EXPECT_EQ(d.getName(), "Megatron");
    EXPECT_EQ(d.getType(), "Decepticon");
    EXPECT_EQ(d.getStrength(), 600);
    EXPECT_EQ(d.getTarget(), "Optimus");
    EXPECT_EQ(d.getDamage(), 200);
}

TEST(ConstructorTest, MaximusDefaultConstructor) {
    Maximus m;
    EXPECT_EQ(m.getName(), "Default");
    EXPECT_EQ(m.getType(), "Autobot");
    EXPECT_EQ(m.getStrength(), 0);
    EXPECT_EQ(m.getVulnerability(), "Unknown");
    EXPECT_EQ(m.getSpeed(), 0);
}

TEST(ConstructorTest, MaximusPartialConstructor) {
    Maximus m("Maximus Prime", "Autobot");
    EXPECT_EQ(m.getName(), "Maximus Prime");
    EXPECT_EQ(m.getType(), "Autobot");
    EXPECT_EQ(m.getStrength(), 0);
    EXPECT_EQ(m.getVulnerability(), "Unknown");
    EXPECT_EQ(m.getSpeed(), 0);
}

TEST(ConstructorTest, MaximusFullConstructor) {
    Weapon weapon("Sword", 80);
    Energy energy("Light Energon");
    Maximus m("Maximus", "Autobot", 700, weapon, &energy, "Fire", 100);
    EXPECT_EQ(m.getName(), "Maximus");
    EXPECT_EQ(m.getType(), "Autobot");
    EXPECT_EQ(m.getStrength(), 700);
    EXPECT_EQ(m.getVulnerability(), "Fire");
    EXPECT_EQ(m.getSpeed(), 100);
}