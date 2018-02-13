#include "header.h"
main()
{
  int i;
  int p_gross = 400, h_gross;
  BSTree T = NULL;
  BSTree H = NULL;
  srand((unsigned)time(NULL));
  system("mode con: cols=150 lines=160");
  do {
    printf("Please input your option:");
    menu();
    scanf("%d", &i);
    getchar();
    printf("\n");
    switch (i) {
      case 0:
        break;
      case 1:
        set_init(&T);
        break;
      case 2: {
        set_destory(&T);
        printf("Successed to destory!\n");
        break;
      }
      case 3: {
        Info sdata;
        input_data(&sdata);
        if (set_insert(&T, sdata, &taller)) {
          printf("Successed to insert!\n");
          height(T, 0);
        } else
          printf("Failed to insert!\n");
        break;
      }
      case 4: {
        int key;
        printf("Please input id:");
        scanf("%d", &key);
        getchar();
        printf("\n");
        if (set_remove(&T, key, &shorter)) {
          printf("Successed to remove!\n");
          height(T, 0);
        } else
          printf("Failed to remove!\n");
        break;
      }
      case 5: {
        char filename[20];
        BSTree T1 = NULL;
        BSTree T0 = NULL;
        printf("Please input filename:");
        scanf("%s", filename);
        getchar();
        printf("\n");
        if (load_data(&T1, filename)) {
          printf("Successed to load!\n");
          set_intersection(T, T1, &T0);
          set_init(&T);
          T = T0;
          height(T, 0);
          printf("Successed to take the intersection!\n");
        } else
          printf("Failed to load!\n");
        break;
      }
      case 6: {
        char filename[20];
        BSTree T1 = NULL;
        printf("Please input filename:");
        scanf("%s", filename);
        getchar();
        printf("\n");
        if (load_data(&T1, filename)) {
          printf("Successed to load!\n");
          set_union(&T, T1);
          height(T, 0);
          printf("Successed to union!\n");
        } else
          printf("Failed to load!\n");
        break;
      }
      case 7: {
        char filename[20];
        BSTree T1 = NULL;
        printf("Please input filename:");
        scanf("%s", filename);
        getchar();
        printf("\n");
        if (load_data(&T1, filename)) {
          printf("Successed to load!\n");
          set_difference(&T, T1);
          height(T, 0);
          printf("Successed to union!\n");
        } else
          printf("Failed to load!\n");
        break;
      }
      case 8: {
        int key;
        printf("Please input id:");
        scanf("%d", &key);
        getchar();
        printf("\n");
        if (set_is_member(T, key, &Ts))
          printf("Yes\n");
        else
          printf("No\n");
        break;
      }
      case 9: {
        char filename[20];
        BSTree T1 = NULL;
        printf("Please input filename:");
        scanf("%s", filename);
        getchar();
        printf("\n");
        if (load_data(&T1, filename)) {
          printf("Successed to load!\n");
          if (set_is_subset(T, T1))
            printf("Yes\n");
          else
            printf("No\n");
        } else
          printf("Failed to load!\n");
        break;
      }
      case 10: {
        char filename[20];
        BSTree T1 = NULL;
        printf("Please input filename:");
        scanf("%s", filename);
        getchar();
        printf("\n");
        if (load_data(&T1, filename)) {
          if (set_is_equal(T, T1))
            printf("Yes\n");
          else
            printf("No\n");
        } else
          printf("Failed to load!\n");
        break;
      }
      case 11: {
        char filename[20];
        printf("Please input filename:");
        scanf("%s", filename);
        getchar();
        printf("\n");
        if (load_data(&T, filename))
          printf("Successed to load!\n");
        break;
      }
      case 12: {
        FILE* fp;
        char filename[20];
        printf("Please input filename:");
        scanf("%s", filename);
        getchar();
        printf("\n");
        if ((fp = fopen(filename, "wb")) == NULL) {
          printf("Failed to open file!\n");
          break;
        }
        if (save_data(T, fp))
          printf("Successed to save!\n");
        else
          printf("Failed to save!\n");
        fclose(fp);
        break;
      }
      case 13:
        create(&T);
        break;
      case 14: {
        visit fp = &operate_id;
        graph(T, 0, 0, fp);
        break;
      }
      case 15: {
        BSTree T0;
        if (person_input(&T, p_gross))
          printf("Successed to input person information!\n");
        else {
          printf("Failed to input person information!\n");
          break;
        }
        if (hobby_set_input(&H, &h_gross))
          printf("Successed to input hobby information!\n");
        else {
          printf("Failed to input person information!\n");
          break;
        }
        relation_input(&T, p_gross, h_gross);
        T0 = T;
        complete_traverse(T, T0);
        break;
      }
      case 16: {
        PreOrderTraverse(T);
        break;
      }
      case 17: {
        int key;
        printf("Please input id:");
        scanf("%d", &key);
        getchar();
        if (!set_is_member(T, key, &Ts)) {
          printf("No such person!\n");
          break;
        }
        printf("\n");
        printf("name:%s%s\n", Ts->data.lastname, Ts->data.givenname);
        printf("friends:");
        operate_relation(Ts->data.friends, T);
        printf("\n");
        printf("fans:");
        operate_relation(Ts->data.fans, T);
        printf("\n");
        printf("attention:");
        operate_relation(Ts->data.attention, T);
        printf("\n");
        printf("hobby:");
        operate_hobby(Ts->data.hobby, H);
        printf("\n");
        break;
      }
      case 18: {
        int key1, key2;
        BSTree T1 = NULL, T2 = NULL, T0 = NULL;
        printf("Please input id of person:");
        scanf("%d", &key1);
        getchar();
        printf("Please input id of the other person:");
        scanf("%d", &key2);
        getchar();
        if (!set_is_member(T, key1, &T1)) {
          printf("No such person!\n");
          break;
        }
        if (!set_is_member(T, key2, &T2)) {
          printf("No such person!\n");
          break;
        }
        set_intersection(T1->data.attention, T2->data.attention, &T0);
        if (T0) {
          operate_relation(T0, T);
          break;
        } else {
          printf("No attention for both!\n");
          break;
        }
      }
      case 19: {
        int key1, key2;
        BSTree T1 = NULL, T2 = NULL, T0 = NULL;
        printf("Please input id of person:");
        scanf("%d", &key1);
        getchar();
        printf("Please input id of the other person:");
        scanf("%d", &key2);
        getchar();
        if (!set_is_member(T, key1, &T1)) {
          printf("No such person!\n");
          break;
        }
        if (!set_is_member(T, key2, &T2)) {
          printf("No such person!\n");
          break;
        }
        set_intersection(T1->data.hobby, T2->data.hobby, &T0);
        if (T0) {
          operate_hobby(T0, H);
          break;
        } else {
          printf("No hobby for both!\n");
          break;
        }
      }
      case 20: {
        int key;
        BSTree T1 = NULL, T0 = NULL;
        printf("Please input id of person:");
        scanf("%d", &key);
        getchar();
        printf("\n");
        if (!set_is_member(T, key, &T1)) {
          printf("No such person!\n");
          break;
        }
        indirect_friends_traverse(T, T1->data.friends, &T0);
        set_difference(&T0, T1);
        operate_relation(T0, T);
        break;
      }
      default:
        printf("Input error!\n");
    }
    getchar();
    system("cls");
  } while (i);
  printf("\n--------------------Welcome again!--------------------\n");
}
void
set_init(BSTree* T)
{
  *T = NULL;
  printf("Successed to init!\n");
}
void
set_destory(BSTree* T)
{
  if ((*T) != NULL) {
    set_destory(&((*T)->lchild));
    set_destory(&((*T)->rchild));
    free(*T);
  }
}
bool
set_insert(BSTree* T, Info e, bool* taller)
{
  if (!(*T)) {
    (*T) = (BSTree)malloc(sizeof(BSTNode));
    (*T)->data = e;
    (*T)->lchild = (*T)->rchild = NULL;
    (*T)->bf = EH;
    *taller = true;
  } else {
    if (e.id == (*T)->data.id) {
      *taller = false;
      return false;
    }
    if (e.id < (*T)->data.id) {
      if (!set_insert(&((*T)->lchild), e, taller))
        return false;
      if (*taller)
        switch ((*T)->bf) {
          case LH:
            LeftBalance(T);
            *taller = false;
            break;
          case EH:
            (*T)->bf = LH;
            *taller = true;
            break;
          case RH:
            (*T)->bf = EH;
            *taller = false;
            break;
        }
    } else {
      if (!set_insert(&((*T)->rchild), e, taller))
        return false;
      if (*taller)
        switch ((*T)->bf) {
          case LH:
            (*T)->bf = EH;
            *taller = false;
            break;
          case EH:
            (*T)->bf = RH;
            *taller = true;
            break;
          case RH:
            RightBalance(T);
            *taller = false;
            break;
        }
    }
  }
  return true;
}
void
LeftBalance(BSTree* T)
{
  BSTree lc, rd;
  lc = (*T)->lchild;
  switch (lc->bf) {
    case LH:
      (*T)->bf = lc->bf = EH;
      R_Rotate(T);
      break;
    case RH:
      rd = lc->rchild;
      switch (rd->bf) {
        case LH:
          (*T)->bf = RH;
          lc->bf = EH;
          break;
        case EH:
          (*T)->bf = lc->bf = EH;
          break;
        case RH:
          (*T)->bf = EH;
          lc->bf = LH;
          break;
      }
      rd->bf = EH;
      L_Rotate(&((*T)->lchild));
      R_Rotate(T);
  }
}
void
RightBalance(BSTree* T)
{
  BSTree rc, ld;
  rc = (*T)->rchild;
  switch (rc->bf) {
    case RH:
      (*T)->bf = rc->bf = EH;
      L_Rotate(T);
      break;
    case LH:
      ld = rc->lchild;
      switch (ld->bf) {
        case LH:
          (*T)->bf = EH;
          rc->bf = RH;
          break;
        case EH:
          (*T)->bf = rc->bf = EH;
          break;
        case RH:
          (*T)->bf = LH;
          rc->bf = EH;
          break;
      }
      ld->bf = EH;
      R_Rotate(&((*T)->rchild));
      L_Rotate(T);
  }
}
void
L_Rotate(BSTree* p)
{
  BSTree rc;
  rc = (*p)->rchild;
  (*p)->rchild = rc->lchild;
  rc->lchild = (*p);
  (*p) = rc;
}
void
R_Rotate(BSTree* p)
{
  BSTree lc;
  lc = (*p)->lchild;
  (*p)->lchild = lc->rchild;
  lc->rchild = (*p);
  (*p) = lc;
}
bool
set_remove(BSTree* T, int key, bool* shorter)
{
  if ((*T) == NULL)
    return false;
  else if (key == (*T)->data.id) {
    BSTree p;
    if ((*T)->lchild == NULL) {
      p = (*T);
      (*T) = (*T)->rchild;
      free(p);
      *shorter = true;
    } else if ((*T)->rchild == NULL) {
      p = (*T);
      (*T) = (*T)->lchild;
      free(p);
      *shorter = true;
    } else {
      p = (*T)->lchild;
      while (p->rchild)
        p = p->rchild;
      (*T)->data = p->data;
      set_remove(&((*T)->lchild), p->data.id, shorter);
    }
  } else if (key < (*T)->data.id) {
    if (!set_remove(&((*T)->lchild), key, shorter))
      return false;
    if (*shorter) {
      switch ((*T)->bf) {
        case LH:
          (*T)->bf = EH;
          *shorter = true;
          break;
        case EH:
          (*T)->bf = RH;
          *shorter = false;
          break;
        case RH:
          if ((*T)->rchild->bf == EH)
            *shorter = false;
          else
            *shorter = true;
          RightBalance(T);
          break;
      }
    }
  } else {
    if (!set_remove(&((*T)->rchild), key, shorter))
      return false;
    if (*shorter) {
      switch ((*T)->bf) {
        case LH:
          if ((*T)->lchild->bf == EH)
            *shorter = false;
          else
            *shorter = true;
          LeftBalance(T);
          break;
        case EH:
          (*T)->bf = LH;
          *shorter = false;
          break;
        case RH:
          (*T)->bf = EH;
          *shorter = true;
          break;
      }
    }
  }
  return true;
}
void
set_intersection(BSTree T, BSTree T1, BSTree* T0)
{
  if (T1 == NULL)
    return;
  if (set_is_member(T, T1->data.id, &Ts))
    set_insert(T0, T1->data, &taller);
  set_intersection(T, T1->lchild, T0);
  set_intersection(T, T1->rchild, T0);
}
void
set_union(BSTree* T, BSTree T1)
{
  if (T1 == NULL)
    return;
  set_insert(T, T1->data, &taller);
  set_union(T, T1->lchild);
  set_union(T, T1->rchild);
}
void
set_difference(BSTree* T, BSTree T1)
{
  if (*T == NULL || T1 == NULL)
    return;
  set_remove(T, T1->data.id, &shorter);
  set_difference(T, T1->lchild);
  set_difference(T, T1->rchild);
}
bool
set_is_member(BSTree T, int key, BSTree* Ts)
{
  if (T == NULL)
    return false;
  if (T->data.id == key) {
    *Ts = T;
    return true;
  } else if (key < T->data.id) {
    if (set_is_member(T->lchild, key, Ts))
      return true;
  } else {
    if (set_is_member(T->rchild, key, Ts))
      return true;
  }
  return false;
}
bool
set_is_subset(BSTree T, BSTree T1)
{
  if (T1 == NULL)
    return true;
  if (set_is_member(T, T1->data.id, &Ts)) {
    if (!set_is_subset(T, T1->lchild))
      return false;
    if (!set_is_subset(T, T1->rchild))
      return false;
    return true;
  } else
    return false;
}
bool
set_is_equal(BSTree T, BSTree T1)
{
  if (!set_is_subset(T, T1))
    return false;
  if (!set_is_subset(T1, T))
    return false;
  return true;
}
bool
load_data(BSTree* T, char* filename)
{
  BSTree p;
  FILE* fp;
  if ((fp = fopen(filename, "rb")) == NULL) {
    printf("Failed to open the file!\n");
    return false;
  }
  while (!feof(fp)) {
    if ((p = (BSTree)malloc(sizeof(BSTNode))) == NULL) {
      printf("Failed to apply memory!\n");
      fclose(fp);
      return false;
    }
    if (fread(p, sizeof(BSTNode), 1, fp) != 1) {
      free(p);
      break;
    }
    set_insert(T, p->data, &taller);
  }
  fclose(fp);
  height(*T, 0);
  return true;
}
bool
save_data(BSTree T, FILE* fp)
{
  if (T) {
    if (fwrite(T, sizeof(BSTNode), 1, fp) != 1) {
      printf("Failed to read-in the data!\n");
      fclose(fp);
      return false;
    }
  } else
    return true;
  if (!save_data(T->lchild, fp))
    return false;
  if (!save_data(T->rchild, fp))
    return false;
  return true;
}
void
height(BSTree T, int i)
{
  if (T)
    T->h = i + 1;
  else
    return;
  height(T->lchild, T->h);
  height(T->rchild, T->h);
}
void
input_data(Info* data)
{
  printf("Please input id:");
  scanf("%d", &(data->id));
  getchar();
  printf("\n");
}
void
create(BSTree* T)
{
  Info* q;
  char s;
  if ((q = (Info*)malloc(sizeof(Info))) == NULL) {
    printf("Failed to apply memory!\n");
    return;
  }
  input_data(q);
  if (set_insert(T, *q, &taller)) {
    printf("Successed to create,do you want to continue?(y/n):");
    while (1) {
      s = getchar();
      getchar();
      printf("\n");
      switch (s) {
        case 'y':
          create(T);
          height(*T, 0);
          return;
        case 'n':
          printf("Completed!\n");
          return;
        default:
          printf("Input error!Please input again:");
      }
    }
  } else
    printf("Failed to create!\n");
  return;
}
void
graph(BSTree T, int x, int y, visit fp)
{
  if (T) {
    gotoxy(x + x0, y + y0);
    fp(T);
  } else
    return;
  if (T->lchild || T->rchild) {
    gotoxy(x + x0, y + y0 + 1);
printf("©¦
");
if(T->lchild){
      int i = 80 / (pow(2, T->h) + 1);
      int j = i;
      gotoxy(x + x0 - j, y + y0 + 3);
printf("©¦
");
gotoxy(x+x0-i+1,y+y0+2);
while(i){
        printf("_");
        i--;
}
graph(T->lchild,x-j,y+4,fp);
}
if(T->rchild){
      int i = 80 / (pow(2, T->h) + 1);
      int j = i;
      gotoxy(x + x0 + 1, y + y0 + 2);
      while (i) {
        printf("_");
        i--;
      }
      gotoxy(x + x0 + j, y + y0 + 3);
printf("©¦
");
graph(T->rchild,x+j,y+4,fp);
}
  }
}
void
operate_id(BSTree T)
{
  printf("%d", T->data.id);
}
void
operate_relation(BSTree T1, BSTree T)
{
  if (T1 == NULL)
    return;
  operate_relation(T1->lchild, T);
  if (set_is_member(T, T1->data.id, &Ts))
printf("%3d%s%s
",Ts->data.id,Ts->data.lastname,Ts->data.givenname);
operate_relation(T1->rchild,T);
}
void
operate_hobby(BSTree T1, BSTree H)
{
  if (T1 == NULL)
    return;
  operate_hobby(T1->lchild, H);
  if (set_is_member(H, T1->data.id, &Ts))
    printf("%3d%s ", Ts->data.id, Ts->data.givenname);
  operate_hobby(T1->rchild, H);
}
void
menu()
{
  printf("\n\n");
  printf("Menu for BinaryTree \n");
  printf("------------------------------------------------------\n");
  printf("1. set init 2. set destroy\n");
printf("3. set insert 4. set remove\n");
printf("5. set intersection
6. set union\n");
printf("7. set difference 8. set is member\n");
printf("9. set is subset 10.set is equal\n");
printf("11.load data
12.save data\n");
printf("13.create new data
14.graph\n");
printf("15.create(random)
16.traverse\n");
printf("17.personal information
18.attention for both\n");
printf("19.hobby for both
20.indirect friends\n");
printf("0. Exit\n");
printf("------------------------------------------------------\n");
}
void
gotoxy(int x, int y)
{
  COORD coord = { x, y };
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
bool
person_input(BSTree* T, int p_gross)
{
  FILE *fpl, *fpg;
  Info* q;
  int number;
  if ((fpl = fopen("lastname.txt", "r")) == NULL) {
    printf("Failed to open the lastname!\n");
    return false;
  }
  if ((fpg = fopen("givenname.txt", "r")) == NULL) {
    printf("Failed to open the givennname!\n");
    return false;
  }
  for (number = 0; number <= p_gross; number++) {
    if ((q = (Info*)malloc(sizeof(Info))) == NULL) {
      printf("Failed to apply memory!\n");
      fclose(fpl);
      fclose(fpg);
      return false;
    }
    if (feof(fpl)) {
      fclose(fpl);
      if ((fpl = fopen("lastname.txt", "r")) == NULL) {
        printf("Failed to open the lastname!\n");
        return false;
      }
    } else {
      if (fgets(q->lastname, 3, fpl) == NULL) {
        free(q);
        break;
      }
    }
    if (feof(fpg)) {
      fclose(fpg);
      if ((fpg = fopen("givenname.txt", "r")) == NULL) {
        printf("Failed to open the givennname!\n");
        return false;
      }
    } else {
      if (fgets(q->givenname, 5, fpg) == NULL) {
        free(q);
        break;
      }
    }
    q->id = number;
    q->friends = NULL;
    q->fans = NULL;
    q->attention = NULL;
    q->hobby = NULL;
    set_insert(T, *q, &taller);
  }
  fclose(fpl);
  fclose(fpg);
  height(*T, 0);
  return true;
}
bool
hobby_set_input(BSTree* H, int* h_gross)
{
  FILE* fp;
  Info* q;
  int number = 0;
  if ((fp = fopen("hobby.txt", "r")) == NULL) {
    printf("Failed to open the hobby!\n");
    return false;
  }
  while (!feof(fp)) {
    if ((q = (Info*)malloc(sizeof(Info))) == NULL) {
      printf("Failed to apply memory!\n");
      fclose(fp);
      return false;
    }
    if (fgets(q->givenname, 5, fp) == NULL) {
      free(q);
      break;
    }
    q->id = number++;
    q->friends = NULL;
    q->fans = NULL;
    q->attention = NULL;
    q->hobby = NULL;
    set_insert(H, *q, &taller);
  }
  *h_gross = number;
  fclose(fp);
  height(*H, 0);
  return true;
}
void
relation_input(BSTree* T, int p_gross, int h_gross)
{
  if (*T == NULL)
    return;
  id_input(&((*T)->data.friends), p_gross, 120, 20);
  id_input(&((*T)->data.fans), p_gross, 120, 20);
  id_input(&((*T)->data.attention), p_gross, 30, 5);
  id_input(&((*T)->data.hobby), h_gross, 10, 2);
  relation_input(&((*T)->lchild), p_gross, h_gross);
  relation_input(&((*T)->rchild), p_gross, h_gross);
}
void
id_input(BSTree* T, int gross, int max, int min)
{
  int i;
  Info* q;
  for (i = 0; i <= rand() % max + min; i++) {
    if ((q = (Info*)malloc(sizeof(Info))) == NULL) {
      printf("Failed to apply memory!\n");
      break;
    }
    q->id = rand() % gross;
    q->friends = NULL;
    q->fans = NULL;
    q->attention = NULL;
    q->hobby = NULL;
    set_insert(T, *q, &taller);
  }
}
void
PreOrderTraverse(BSTree T)
{
  if (T == NULL)
    return;
  PreOrderTraverse(T->lchild);
  printf("%3d%s%s ", T->data.id, T->data.lastname, T->data.givenname);
  PreOrderTraverse(T->rchild);
}
void
indirect_friends_traverse(BSTree T, BSTree Tf, BSTree* T0)
{
  if (Tf == NULL)
    return;
  set_is_member(T, Tf->data.id, &Ts);
  indirect_friends_insert(Ts->data.friends, T0);
  indirect_friends_traverse(T, Tf->lchild, T0);
  indirect_friends_traverse(T, Tf->rchild, T0);
}
void
indirect_friends_insert(BSTree T, BSTree* T0)
{
  if (T == NULL)
    return;
  set_insert(T0, T->data, &taller);
  indirect_friends_insert(T->lchild, T0);
  indirect_friends_insert(T->rchild, T0);
}
void
complete_traverse(BSTree T, BSTree T0)
{
  if (T0 == NULL)
    return;
  complete_traverse(T, T0->lchild);
  complete_friends(T, T0, T0->data.friends);
  complete_traverse(T, T0->rchild);
}
void
complete_friends(BSTree T, BSTree T1, BSTree Tf)
{
  if (Tf == NULL)
    return;
  BSTree Ts0;
  set_is_member(T, Tf->data.id, &Ts);
  if (!set_is_member(Ts->data.friends, T1->data.id, &Ts0))
    set_insert(&Ts->data.friends, T1->data, &taller);
  complete_friends(T, T1, Tf->lchild);
  complete_friends(T, T1, Tf->rchild);
}