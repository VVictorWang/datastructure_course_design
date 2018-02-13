#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <conio.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#define LH 1
#define EH 0
#define RH -1
typedef struct Info {
  int id;
  char lastname[3];
  char givenname[5];
  struct BSTNode *friends;
  struct BSTNode *fans;
  struct BSTNode *attention;
  struct BSTNode *hobby;
} Info;
typedef struct BSTNode {
  Info data;
  int bf;
  int h;
  struct BSTNode *lchild, *rchild;
} BSTNode, *BSTree;
typedef void (*visit)(BSTree T);
void set_init(BSTree *T);
void set_destory(BSTree *T);
bool set_insert(BSTree *T, Info e, bool *taller);
void LeftBalance(BSTree *T);
void RightBalance(BSTree *T);
void L_Rotate(BSTree *p);
void R_Rotate(BSTree *p);
bool set_remove(BSTree *T, int key, bool *shorter);
void set_intersection(BSTree T, BSTree T1, BSTree *T0);
void set_union(BSTree *T, BSTree T1);
void set_difference(BSTree *T, BSTree T1);
bool set_is_member(BSTree T, int key, BSTree *Ts);
bool set_is_subset(BSTree TS, BSTree T1);
bool set_is_equal(BSTree T, BSTree T1);
bool load_data(BSTree *T, char *filename);
bool save_data(BSTree T, FILE *fp);
void input_data(Info *data);
void create(BSTree *T);
void height(BSTree T, int i);
void graph(BSTree T, int x, int y, visit fp);
void operate_id(BSTree T);
void operate_relation(BSTree T1, BSTree T);
void operate_hobby(BSTree T1, BSTree H);
void gotoxy(int x, int y);
void menu();
bool person_input(BSTree *T, int p_gross);
bool hobby_set_input(BSTree *H, int *h_gross);
void relation_input(BSTree *T, int p_gross, int h_gross);
void id_input(BSTree *T, int gross, int max, int min);
void PreOrderTraverse(BSTree T);
void indirect_friends_traverse(BSTree T, BSTree Tf, BSTree *T0);
void indirect_friends_insert(BSTree T, BSTree *T0);
void adjust_traverse(BSTree T);
void complete_traverse(BSTree T, BSTree T0);
void complete_friends(BSTree T, BSTree T1, BSTree Tf);
void complete_fans(BSTree T, BSTree T1, BSTree Tf);
void complete_sttention(BSTree T, BSTree T1, BSTree Tf);
bool taller, shorter;
int x0 = 80, y0 = 20;
BSTree Ts = NULL;
#endif // HEADER_H_INCLUDED