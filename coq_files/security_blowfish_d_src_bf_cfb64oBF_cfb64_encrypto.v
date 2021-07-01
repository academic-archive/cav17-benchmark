Add LoadPath "coq".
Require Import Pasta.

Notation IDBF_cfb64_encrypt_z := 1%positive.
Notation IDBF_cfb64_encrypt__tmp := 2%positive.
Notation IDBF_cfb64_encrypt__tmp1 := 3%positive.
Notation IDBF_cfb64_encrypt_c := 4%positive.
Notation IDBF_cfb64_encrypt_cc := 5%positive.
Notation IDBF_cfb64_encrypt_l := 6%positive.
Notation IDBF_cfb64_encrypt_n := 7%positive.
Notation IDBF_cfb64_encrypt_num_dref := 8%positive.
Notation IDBF_cfb64_encrypt_t := 9%positive.
Notation IDBF_cfb64_encrypt_v0 := 10%positive.
Notation IDBF_cfb64_encrypt_v1 := 11%positive.
Notation IDBF_cfb64_encrypt_encrypt := 12%positive.
Notation IDBF_cfb64_encrypt_in := 13%positive.
Notation IDBF_cfb64_encrypt_ivec := 14%positive.
Notation IDBF_cfb64_encrypt_length := 15%positive.
Notation IDBF_cfb64_encrypt_num := 16%positive.
Notation IDBF_cfb64_encrypt_out := 17%positive.
Notation IDBF_cfb64_encrypt_schedule := 18%positive.
Definition BF_cfb64_encrypt : graph := {|
  g_start := 1%positive;
  g_end := 50%positive;
  g_edges := (1%positive,(AAssign IDBF_cfb64_encrypt_z (Some (ENum (0)))),
             2%positive)::
             (2%positive,(AAssign IDBF_cfb64_encrypt__tmp1
             (Some (EVar IDBF_cfb64_encrypt_length))),3%positive)::
             (3%positive,(AAssign IDBF_cfb64_encrypt__tmp
             (Some (EVar IDBF_cfb64_encrypt_encrypt))),4%positive)::
             (4%positive,(AAssign IDBF_cfb64_encrypt_n
             (Some (EVar IDBF_cfb64_encrypt_num_dref))),5%positive)::
             (5%positive,(AAssign IDBF_cfb64_encrypt_l
             (Some (EVar IDBF_cfb64_encrypt__tmp1))),6%positive)::
             (6%positive,AWeaken,7%positive)::
             (7%positive,(AGuard
             (fun s => ((eval (EVar IDBF_cfb64_encrypt__tmp) s) <>
             (eval (ENum (0)) s))%Z)),36%positive)::
             (7%positive,(AGuard
             (fun s => ((eval (EVar IDBF_cfb64_encrypt__tmp) s) =
             (eval (ENum (0)) s))%Z)),8%positive)::
             (8%positive,AWeaken,9%positive)::
             (9%positive,ANone,10%positive)::
             (10%positive,(AAssign IDBF_cfb64_encrypt_l
             (Some (EAdd (EVar IDBF_cfb64_encrypt_l) (ENum (-1))))),
             11%positive)::(11%positive,AWeaken,12%positive)::
             (12%positive,(AGuard
             (fun s => ((eval (EVar IDBF_cfb64_encrypt_l) s) <>
             (eval (ENum (0)) s))%Z)),15%positive)::
             (12%positive,(AGuard
             (fun s => ((eval (EVar IDBF_cfb64_encrypt_l) s) =
             (eval (ENum (0)) s))%Z)),13%positive)::
             (13%positive,AWeaken,14%positive)::
             (14%positive,ANone,43%positive)::
             (15%positive,AWeaken,16%positive)::
             (16%positive,(AGuard
             (fun s => ((eval (EVar IDBF_cfb64_encrypt_n) s) =
             (eval (ENum (0)) s))%Z)),18%positive)::
             (16%positive,(AGuard
             (fun s => ((eval (EVar IDBF_cfb64_encrypt_n) s) <>
             (eval (ENum (0)) s))%Z)),17%positive)::
             (17%positive,AWeaken,30%positive)::
             (18%positive,AWeaken,19%positive)::
             (19%positive,(AAssign IDBF_cfb64_encrypt_v0 None),20%positive)::
             (20%positive,(AAssign IDBF_cfb64_encrypt_v0 None),21%positive)::
             (21%positive,(AAssign IDBF_cfb64_encrypt_v0 None),22%positive)::
             (22%positive,(AAssign IDBF_cfb64_encrypt_v0 None),23%positive)::
             (23%positive,(AAssign IDBF_cfb64_encrypt_v1 None),24%positive)::
             (24%positive,(AAssign IDBF_cfb64_encrypt_v1 None),25%positive)::
             (25%positive,(AAssign IDBF_cfb64_encrypt_v1 None),26%positive)::
             (26%positive,(AAssign IDBF_cfb64_encrypt_v1 None),27%positive)::
             (27%positive,(AAssign IDBF_cfb64_encrypt_t None),28%positive)::
             (28%positive,(AAssign IDBF_cfb64_encrypt_t None),29%positive)::
             (29%positive,ANone,30%positive)::
             (30%positive,(AAssign IDBF_cfb64_encrypt_cc None),31%positive)::
             (31%positive,(AAssign IDBF_cfb64_encrypt_c None),32%positive)::
             (32%positive,(AAssign IDBF_cfb64_encrypt_n None),33%positive)::
             (33%positive,ANone,34%positive)::
             (34%positive,ANone,35%positive)::
             (35%positive,(AAssign IDBF_cfb64_encrypt_z
             (Some (EAdd (ENum (1)) (EVar IDBF_cfb64_encrypt_z)))),
             10%positive)::(36%positive,AWeaken,37%positive)::
             (37%positive,ANone,38%positive)::
             (38%positive,(AAssign IDBF_cfb64_encrypt_l
             (Some (EAdd (EVar IDBF_cfb64_encrypt_l) (ENum (-1))))),
             39%positive)::(39%positive,AWeaken,40%positive)::
             (40%positive,(AGuard
             (fun s => ((eval (EVar IDBF_cfb64_encrypt_l) s) <>
             (eval (ENum (0)) s))%Z)),51%positive)::
             (40%positive,(AGuard
             (fun s => ((eval (EVar IDBF_cfb64_encrypt_l) s) =
             (eval (ENum (0)) s))%Z)),41%positive)::
             (41%positive,AWeaken,42%positive)::
             (42%positive,ANone,43%positive)::
             (43%positive,(AAssign IDBF_cfb64_encrypt_cc (Some (ENum (0)))),
             44%positive)::
             (44%positive,(AAssign IDBF_cfb64_encrypt_c (Some (ENum (0)))),
             45%positive)::
             (45%positive,(AAssign IDBF_cfb64_encrypt_t (Some (ENum (0)))),
             46%positive)::
             (46%positive,(AAssign IDBF_cfb64_encrypt_v1 (Some (ENum (0)))),
             47%positive)::
             (47%positive,(AAssign IDBF_cfb64_encrypt_v0 (Some (ENum (0)))),
             48%positive)::
             (48%positive,(AAssign IDBF_cfb64_encrypt_num_dref
             (Some (EVar IDBF_cfb64_encrypt_n))),49%positive)::
             (49%positive,AWeaken,50%positive)::
             (51%positive,AWeaken,52%positive)::
             (52%positive,(AGuard
             (fun s => ((eval (EVar IDBF_cfb64_encrypt_n) s) =
             (eval (ENum (0)) s))%Z)),54%positive)::
             (52%positive,(AGuard
             (fun s => ((eval (EVar IDBF_cfb64_encrypt_n) s) <>
             (eval (ENum (0)) s))%Z)),53%positive)::
             (53%positive,AWeaken,66%positive)::
             (54%positive,AWeaken,55%positive)::
             (55%positive,(AAssign IDBF_cfb64_encrypt_v0 None),56%positive)::
             (56%positive,(AAssign IDBF_cfb64_encrypt_v0 None),57%positive)::
             (57%positive,(AAssign IDBF_cfb64_encrypt_v0 None),58%positive)::
             (58%positive,(AAssign IDBF_cfb64_encrypt_v0 None),59%positive)::
             (59%positive,(AAssign IDBF_cfb64_encrypt_v1 None),60%positive)::
             (60%positive,(AAssign IDBF_cfb64_encrypt_v1 None),61%positive)::
             (61%positive,(AAssign IDBF_cfb64_encrypt_v1 None),62%positive)::
             (62%positive,(AAssign IDBF_cfb64_encrypt_v1 None),63%positive)::
             (63%positive,(AAssign IDBF_cfb64_encrypt_t None),64%positive)::
             (64%positive,(AAssign IDBF_cfb64_encrypt_t None),65%positive)::
             (65%positive,ANone,66%positive)::
             (66%positive,(AAssign IDBF_cfb64_encrypt_c None),67%positive)::
             (67%positive,(AAssign IDBF_cfb64_encrypt_n None),68%positive)::
             (68%positive,ANone,69%positive)::
             (69%positive,ANone,70%positive)::
             (70%positive,(AAssign IDBF_cfb64_encrypt_z
             (Some (EAdd (ENum (1)) (EVar IDBF_cfb64_encrypt_z)))),
             38%positive)::nil
|}.

Definition BF_cfb64_encrypt_ai (p: node) (s: state) := 
  match p with
    | 1%positive => (True)%Z
    | 2%positive => (1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_z) <= 0)%Z
    | 3%positive => (-1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_z) <= 0)%Z
    | 4%positive => (1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_z) <= 0)%Z
    | 5%positive => (-1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_z) <= 0)%Z
    | 6%positive => (1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_z) <= 0)%Z
    | 7%positive => (-1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_z) <= 0)%Z
    | 8%positive => (1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ 1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ -1 * (s IDBF_cfb64_encrypt__tmp) <= 0)%Z
    | 9%positive => (-1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ 1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_z) <= 0)%Z
    | 10%positive => (-1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ -1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ 1 * (s IDBF_cfb64_encrypt__tmp) <= 0)%Z
    | 11%positive => (1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ -1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_z) <= 0)%Z
    | 12%positive => (-1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ -1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ 1 * (s IDBF_cfb64_encrypt__tmp) <= 0)%Z
    | 13%positive => (1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ -1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_l) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_l) <= 0)%Z
    | 14%positive => (-1 * (s IDBF_cfb64_encrypt_l) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_l) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ -1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ 1 * (s IDBF_cfb64_encrypt__tmp) <= 0)%Z
    | 15%positive => (1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ -1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_z) <= 0)%Z
    | 16%positive => (-1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ -1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ 1 * (s IDBF_cfb64_encrypt__tmp) <= 0)%Z
    | 17%positive => (1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ -1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_z) <= 0)%Z
    | 18%positive => (1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ -1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_n) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_n) <= 0)%Z
    | 19%positive => (-1 * (s IDBF_cfb64_encrypt_n) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_n) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ -1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ 1 * (s IDBF_cfb64_encrypt__tmp) <= 0)%Z
    | 20%positive => (1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ -1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_n) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_n) <= 0)%Z
    | 21%positive => (-1 * (s IDBF_cfb64_encrypt_n) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_n) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ -1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ 1 * (s IDBF_cfb64_encrypt__tmp) <= 0)%Z
    | 22%positive => (1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ -1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_n) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_n) <= 0)%Z
    | 23%positive => (-1 * (s IDBF_cfb64_encrypt_n) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_n) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ -1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ 1 * (s IDBF_cfb64_encrypt__tmp) <= 0)%Z
    | 24%positive => (1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ -1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_n) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_n) <= 0)%Z
    | 25%positive => (-1 * (s IDBF_cfb64_encrypt_n) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_n) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ -1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ 1 * (s IDBF_cfb64_encrypt__tmp) <= 0)%Z
    | 26%positive => (1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ -1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_n) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_n) <= 0)%Z
    | 27%positive => (-1 * (s IDBF_cfb64_encrypt_n) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_n) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ -1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ 1 * (s IDBF_cfb64_encrypt__tmp) <= 0)%Z
    | 28%positive => (1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ -1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_n) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_n) <= 0)%Z
    | 29%positive => (-1 * (s IDBF_cfb64_encrypt_n) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_n) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ -1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ 1 * (s IDBF_cfb64_encrypt__tmp) <= 0)%Z
    | 30%positive => (1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ -1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_z) <= 0)%Z
    | 31%positive => (-1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ -1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ 1 * (s IDBF_cfb64_encrypt__tmp) <= 0)%Z
    | 32%positive => (1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ -1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_z) <= 0)%Z
    | 33%positive => (-1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ -1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ 1 * (s IDBF_cfb64_encrypt__tmp) <= 0)%Z
    | 34%positive => (1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ -1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_z) <= 0)%Z
    | 35%positive => (-1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ -1 * (s IDBF_cfb64_encrypt__tmp) <= 0 /\ 1 * (s IDBF_cfb64_encrypt__tmp) <= 0)%Z
    | 36%positive => (1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_z) <= 0)%Z
    | 37%positive => (-1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_z) <= 0)%Z
    | 38%positive => (-1 * (s IDBF_cfb64_encrypt_z) <= 0)%Z
    | 39%positive => (-1 * (s IDBF_cfb64_encrypt_z) <= 0)%Z
    | 40%positive => (-1 * (s IDBF_cfb64_encrypt_z) <= 0)%Z
    | 41%positive => (-1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_l) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_l) <= 0)%Z
    | 42%positive => (-1 * (s IDBF_cfb64_encrypt_l) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_l) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_z) <= 0)%Z
    | 43%positive => (-1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_l) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_l) <= 0)%Z
    | 44%positive => (-1 * (s IDBF_cfb64_encrypt_l) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_l) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_cc) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_cc) <= 0)%Z
    | 45%positive => (-1 * (s IDBF_cfb64_encrypt_cc) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_cc) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_l) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_l) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_c) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_c) <= 0)%Z
    | 46%positive => (-1 * (s IDBF_cfb64_encrypt_c) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_c) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_l) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_l) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_cc) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_cc) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_t) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_t) <= 0)%Z
    | 47%positive => (-1 * (s IDBF_cfb64_encrypt_t) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_t) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_cc) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_cc) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_l) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_l) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_c) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_c) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_v1) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_v1) <= 0)%Z
    | 48%positive => (-1 * (s IDBF_cfb64_encrypt_v1) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_v1) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_c) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_c) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_l) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_l) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_cc) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_cc) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_t) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_t) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_v0) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_v0) <= 0)%Z
    | 49%positive => (-1 * (s IDBF_cfb64_encrypt_v0) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_v0) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_t) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_t) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_cc) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_cc) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_l) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_l) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_c) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_c) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_v1) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_v1) <= 0)%Z
    | 50%positive => (-1 * (s IDBF_cfb64_encrypt_v1) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_v1) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_c) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_c) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_l) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_l) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_cc) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_cc) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_t) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_t) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_v0) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_v0) <= 0)%Z
    | 51%positive => (-1 * (s IDBF_cfb64_encrypt_z) <= 0)%Z
    | 52%positive => (-1 * (s IDBF_cfb64_encrypt_z) <= 0)%Z
    | 53%positive => (-1 * (s IDBF_cfb64_encrypt_z) <= 0)%Z
    | 54%positive => (-1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_n) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_n) <= 0)%Z
    | 55%positive => (-1 * (s IDBF_cfb64_encrypt_n) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_n) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_z) <= 0)%Z
    | 56%positive => (-1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_n) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_n) <= 0)%Z
    | 57%positive => (-1 * (s IDBF_cfb64_encrypt_n) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_n) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_z) <= 0)%Z
    | 58%positive => (-1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_n) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_n) <= 0)%Z
    | 59%positive => (-1 * (s IDBF_cfb64_encrypt_n) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_n) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_z) <= 0)%Z
    | 60%positive => (-1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_n) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_n) <= 0)%Z
    | 61%positive => (-1 * (s IDBF_cfb64_encrypt_n) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_n) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_z) <= 0)%Z
    | 62%positive => (-1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_n) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_n) <= 0)%Z
    | 63%positive => (-1 * (s IDBF_cfb64_encrypt_n) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_n) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_z) <= 0)%Z
    | 64%positive => (-1 * (s IDBF_cfb64_encrypt_z) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_n) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_n) <= 0)%Z
    | 65%positive => (-1 * (s IDBF_cfb64_encrypt_n) <= 0 /\ 1 * (s IDBF_cfb64_encrypt_n) <= 0 /\ -1 * (s IDBF_cfb64_encrypt_z) <= 0)%Z
    | 66%positive => (-1 * (s IDBF_cfb64_encrypt_z) <= 0)%Z
    | 67%positive => (-1 * (s IDBF_cfb64_encrypt_z) <= 0)%Z
    | 68%positive => (-1 * (s IDBF_cfb64_encrypt_z) <= 0)%Z
    | 69%positive => (-1 * (s IDBF_cfb64_encrypt_z) <= 0)%Z
    | 70%positive => (-1 * (s IDBF_cfb64_encrypt_z) <= 0)%Z
    | _ => False
  end.

Definition BF_cfb64_encrypt_pot (p : node) (s : state): Q := 
  match p with
    | 1%positive => ((s IDBF_cfb64_encrypt_length))%Q
    | 2%positive => ((s IDBF_cfb64_encrypt_length) + (s IDBF_cfb64_encrypt_z))%Q
    | 3%positive => ((s IDBF_cfb64_encrypt__tmp1) + (s IDBF_cfb64_encrypt_z))%Q
    | 4%positive => ((s IDBF_cfb64_encrypt__tmp1) + (s IDBF_cfb64_encrypt_z))%Q
    | 5%positive => ((s IDBF_cfb64_encrypt__tmp1) + (s IDBF_cfb64_encrypt_z))%Q
    | 6%positive => ((s IDBF_cfb64_encrypt_l) + (s IDBF_cfb64_encrypt_z))%Q
    | 7%positive => ((s IDBF_cfb64_encrypt_l) + (s IDBF_cfb64_encrypt_z))%Q
    | 8%positive => ((s IDBF_cfb64_encrypt_l) + (s IDBF_cfb64_encrypt_z))%Q
    | 9%positive => ((s IDBF_cfb64_encrypt_l) + (s IDBF_cfb64_encrypt_z))%Q
    | 10%positive => ((s IDBF_cfb64_encrypt_l) + (s IDBF_cfb64_encrypt_z))%Q
    | 11%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 12%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 13%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 14%positive => ((s IDBF_cfb64_encrypt_z))%Q
    | 15%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 16%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 17%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 18%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 19%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 20%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 21%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 22%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 23%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 24%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 25%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 26%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 27%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 28%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 29%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 30%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 31%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 32%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 33%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 34%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 35%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 36%positive => ((s IDBF_cfb64_encrypt_l) + (s IDBF_cfb64_encrypt_z))%Q
    | 37%positive => ((s IDBF_cfb64_encrypt_l) + (s IDBF_cfb64_encrypt_z))%Q
    | 38%positive => ((s IDBF_cfb64_encrypt_l) + (s IDBF_cfb64_encrypt_z))%Q
    | 39%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 40%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 41%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 42%positive => ((s IDBF_cfb64_encrypt_z))%Q
    | 43%positive => ((s IDBF_cfb64_encrypt_z))%Q
    | 44%positive => ((s IDBF_cfb64_encrypt_z))%Q
    | 45%positive => ((s IDBF_cfb64_encrypt_z))%Q
    | 46%positive => ((s IDBF_cfb64_encrypt_z))%Q
    | 47%positive => ((s IDBF_cfb64_encrypt_z))%Q
    | 48%positive => ((s IDBF_cfb64_encrypt_z))%Q
    | 49%positive => ((s IDBF_cfb64_encrypt_z))%Q
    | 50%positive => ((s IDBF_cfb64_encrypt_z))%Q
    | 51%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 52%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 53%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 54%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 55%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 56%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 57%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 58%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 59%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 60%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 61%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 62%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 63%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 64%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 65%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 66%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 67%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 68%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 69%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | 70%positive => ((1 # 1) + (s IDBF_cfb64_encrypt_l)
                      + (s IDBF_cfb64_encrypt_z))%Q
    | _ => (0 # 1)%Q
  end.

Definition BF_cfb64_encrypt_hints (p : node) (s : state) := 
  match p with
    | 1%positive => []
    | 2%positive => []
    | 3%positive => []
    | 4%positive => []
    | 5%positive => []
    | 6%positive => []
    | 7%positive => []
    | 8%positive => []
    | 9%positive => []
    | 10%positive => []
    | 11%positive => []
    | 12%positive => []
    | 13%positive => [(*0 1*) F_one;
                      (*0 1*) F_binom_monotonic 1 (F_max0_ge_0 ((s IDBF_cfb64_encrypt_l))) (F_check_ge (0) (0));
                      (*0 1*) F_binom_monotonic 1 (F_max0_le_arg (F_check_ge ((s IDBF_cfb64_encrypt_l)) (0))) (F_max0_ge_0 ((s IDBF_cfb64_encrypt_l)))]
    | 14%positive => []
    | 15%positive => []
    | 16%positive => []
    | 17%positive => []
    | 18%positive => []
    | 19%positive => []
    | 20%positive => []
    | 21%positive => []
    | 22%positive => []
    | 23%positive => []
    | 24%positive => []
    | 25%positive => []
    | 26%positive => []
    | 27%positive => []
    | 28%positive => []
    | 29%positive => []
    | 30%positive => []
    | 31%positive => []
    | 32%positive => []
    | 33%positive => []
    | 34%positive => []
    | 35%positive => []
    | 36%positive => []
    | 37%positive => []
    | 38%positive => []
    | 39%positive => []
    | 40%positive => []
    | 41%positive => [(*-1 0*) F_one;
                      (*-1 0*) F_binom_monotonic 1 (F_max0_ge_0 ((s IDBF_cfb64_encrypt_l))) (F_check_ge (0) (0));
                      (*-1 0*) F_binom_monotonic 1 (F_max0_le_arg (F_check_ge ((s IDBF_cfb64_encrypt_l)) (0))) (F_max0_ge_0 ((s IDBF_cfb64_encrypt_l)))]
    | 42%positive => []
    | 43%positive => []
    | 44%positive => []
    | 45%positive => []
    | 46%positive => []
    | 47%positive => []
    | 48%positive => []
    | 49%positive => []
    | 50%positive => []
    | 51%positive => []
    | 52%positive => []
    | 53%positive => []
    | 54%positive => []
    | 55%positive => []
    | 56%positive => []
    | 57%positive => []
    | 58%positive => []
    | 59%positive => []
    | 60%positive => []
    | 61%positive => []
    | 62%positive => []
    | 63%positive => []
    | 64%positive => []
    | 65%positive => []
    | 66%positive => []
    | 67%positive => []
    | 68%positive => []
    | 69%positive => []
    | 70%positive => []
    | _ => []
  end.


Theorem BF_cfb64_encrypt_ai_correct:
  forall s p' s', steps (g_start BF_cfb64_encrypt) s (g_edges BF_cfb64_encrypt) p' s' -> BF_cfb64_encrypt_ai p' s'.
Proof.
  check_ai.
Qed.

Theorem BF_cfb64_encrypt_pot_correct:
  forall s p' s',
    steps (g_start BF_cfb64_encrypt) s (g_edges BF_cfb64_encrypt) p' s' ->
    (BF_cfb64_encrypt_pot (g_start BF_cfb64_encrypt) s >= BF_cfb64_encrypt_pot p' s')%Q.
Proof.
  check_lp BF_cfb64_encrypt_ai_correct BF_cfb64_encrypt_hints.
Qed.

