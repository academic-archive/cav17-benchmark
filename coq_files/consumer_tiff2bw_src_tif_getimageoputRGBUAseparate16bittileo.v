Add LoadPath "coq".
Require Import Pasta.

Notation IDputRGBUAseparate16bittile_z := 1%positive.
Notation IDputRGBUAseparate16bittile__tmp := 2%positive.
Notation IDputRGBUAseparate16bittile__tmp1 := 3%positive.
Notation IDputRGBUAseparate16bittile__tmp2 := 4%positive.
Notation IDputRGBUAseparate16bittile__tmp3 := 5%positive.
Notation IDputRGBUAseparate16bittile__tmp4 := 6%positive.
Notation IDputRGBUAseparate16bittile__tmp5 := 7%positive.
Notation IDputRGBUAseparate16bittile_a4 := 8%positive.
Notation IDputRGBUAseparate16bittile_b3 := 9%positive.
Notation IDputRGBUAseparate16bittile_g2 := 10%positive.
Notation IDputRGBUAseparate16bittile_r1 := 11%positive.
Notation IDputRGBUAseparate16bittile_a := 12%positive.
Notation IDputRGBUAseparate16bittile_b := 13%positive.
Notation IDputRGBUAseparate16bittile_cp := 14%positive.
Notation IDputRGBUAseparate16bittile_fromskew := 15%positive.
Notation IDputRGBUAseparate16bittile_g := 16%positive.
Notation IDputRGBUAseparate16bittile_h := 17%positive.
Notation IDputRGBUAseparate16bittile_img := 18%positive.
Notation IDputRGBUAseparate16bittile_r := 19%positive.
Notation IDputRGBUAseparate16bittile_toskew := 20%positive.
Notation IDputRGBUAseparate16bittile_w := 21%positive.
Notation IDputRGBUAseparate16bittile_x := 22%positive.
Notation IDputRGBUAseparate16bittile_y := 23%positive.
Definition putRGBUAseparate16bittile : graph := {|
  g_start := 1%positive;
  g_end := 16%positive;
  g_edges := (1%positive,(AAssign IDputRGBUAseparate16bittile_z
             (Some (ENum (0)))),2%positive)::
             (2%positive,(AGuard
             (fun s => ((eval (EVar IDputRGBUAseparate16bittile__tmp1) s) >=
             (eval (ENum (0)) s))%Z)),3%positive)::
             (3%positive,(AGuard
             (fun s => ((eval (EVar IDputRGBUAseparate16bittile__tmp) s) >=
             (eval (ENum (0)) s))%Z)),4%positive)::
             (4%positive,AWeaken,5%positive)::
             (5%positive,(AAssign IDputRGBUAseparate16bittile__tmp1
             (Some (EVar IDputRGBUAseparate16bittile_x))),6%positive)::
             (6%positive,(AAssign IDputRGBUAseparate16bittile__tmp5
             (Some (EVar IDputRGBUAseparate16bittile_y))),7%positive)::
             (7%positive,(AAssign IDputRGBUAseparate16bittile__tmp2
             (Some (EVar IDputRGBUAseparate16bittile_w))),8%positive)::
             (8%positive,(AAssign IDputRGBUAseparate16bittile__tmp
             (Some (EVar IDputRGBUAseparate16bittile_h))),9%positive)::
             (9%positive,(AAssign IDputRGBUAseparate16bittile__tmp4
             (Some (EVar IDputRGBUAseparate16bittile_fromskew))),10%positive)::
             (10%positive,(AAssign IDputRGBUAseparate16bittile__tmp3
             (Some (EVar IDputRGBUAseparate16bittile_toskew))),11%positive)::
             (11%positive,ANone,12%positive)::
             (12%positive,(AAssign IDputRGBUAseparate16bittile__tmp
             (Some (EAdd (EVar IDputRGBUAseparate16bittile__tmp)
             (ENum (-1))))),13%positive)::(13%positive,AWeaken,14%positive)::
             (14%positive,(AGuard
             (fun s => ((eval (EVar IDputRGBUAseparate16bittile__tmp) s) >
             (eval (ENum (0)) s))%Z)),17%positive)::
             (14%positive,(AGuard
             (fun s => ((eval (EVar IDputRGBUAseparate16bittile__tmp) s) <=
             (eval (ENum (0)) s))%Z)),15%positive)::
             (15%positive,AWeaken,16%positive)::
             (17%positive,AWeaken,18%positive)::
             (18%positive,(AAssign IDputRGBUAseparate16bittile__tmp1
             (Some (EVar IDputRGBUAseparate16bittile__tmp2))),19%positive)::
             (19%positive,ANone,20%positive)::
             (20%positive,(AAssign IDputRGBUAseparate16bittile__tmp1
             (Some (EAdd (EVar IDputRGBUAseparate16bittile__tmp1)
             (ENum (-1))))),21%positive)::(21%positive,AWeaken,22%positive)::
             (22%positive,(AGuard
             (fun s => ((eval (EVar IDputRGBUAseparate16bittile__tmp1) s) >
             (eval (ENum (0)) s))%Z)),27%positive)::
             (22%positive,(AGuard
             (fun s => ((eval (EVar IDputRGBUAseparate16bittile__tmp1) s) <=
             (eval (ENum (0)) s))%Z)),23%positive)::
             (23%positive,AWeaken,24%positive)::
             (24%positive,ANone,25%positive)::
             (25%positive,ANone,26%positive)::
             (26%positive,(AAssign IDputRGBUAseparate16bittile_z
             (Some (EAdd (ENum (1)) (EVar IDputRGBUAseparate16bittile_z)))),
             12%positive)::(27%positive,AWeaken,28%positive)::
             (28%positive,(AAssign IDputRGBUAseparate16bittile_a4 None),
             29%positive)::
             (29%positive,(AAssign IDputRGBUAseparate16bittile_r1 None),
             30%positive)::
             (30%positive,(AAssign IDputRGBUAseparate16bittile_g2 None),
             31%positive)::
             (31%positive,(AAssign IDputRGBUAseparate16bittile_b3 None),
             32%positive)::(32%positive,ANone,33%positive)::
             (33%positive,ANone,34%positive)::
             (34%positive,(AAssign IDputRGBUAseparate16bittile_z
             (Some (EAdd (ENum (1)) (EVar IDputRGBUAseparate16bittile_z)))),
             20%positive)::nil
|}.

Definition putRGBUAseparate16bittile_ai (p: node) (s: state) := 
  match p with
    | 1%positive => (True)%Z
    | 2%positive => (1 * (s IDputRGBUAseparate16bittile_z) <= 0 /\ -1 * (s IDputRGBUAseparate16bittile_z) <= 0)%Z
    | 3%positive => (-1 * (s IDputRGBUAseparate16bittile_z) <= 0 /\ 1 * (s IDputRGBUAseparate16bittile_z) <= 0 /\ -1 * (s IDputRGBUAseparate16bittile__tmp1) <= 0)%Z
    | 4%positive => (-1 * (s IDputRGBUAseparate16bittile__tmp1) <= 0 /\ 1 * (s IDputRGBUAseparate16bittile_z) <= 0 /\ -1 * (s IDputRGBUAseparate16bittile_z) <= 0 /\ -1 * (s IDputRGBUAseparate16bittile__tmp) <= 0)%Z
    | 5%positive => (-1 * (s IDputRGBUAseparate16bittile__tmp) <= 0 /\ -1 * (s IDputRGBUAseparate16bittile_z) <= 0 /\ 1 * (s IDputRGBUAseparate16bittile_z) <= 0 /\ -1 * (s IDputRGBUAseparate16bittile__tmp1) <= 0)%Z
    | 6%positive => (1 * (s IDputRGBUAseparate16bittile_z) <= 0 /\ -1 * (s IDputRGBUAseparate16bittile_z) <= 0 /\ -1 * (s IDputRGBUAseparate16bittile__tmp) <= 0)%Z
    | 7%positive => (-1 * (s IDputRGBUAseparate16bittile__tmp) <= 0 /\ -1 * (s IDputRGBUAseparate16bittile_z) <= 0 /\ 1 * (s IDputRGBUAseparate16bittile_z) <= 0)%Z
    | 8%positive => (1 * (s IDputRGBUAseparate16bittile_z) <= 0 /\ -1 * (s IDputRGBUAseparate16bittile_z) <= 0 /\ -1 * (s IDputRGBUAseparate16bittile__tmp) <= 0)%Z
    | 9%positive => (-1 * (s IDputRGBUAseparate16bittile_z) <= 0 /\ 1 * (s IDputRGBUAseparate16bittile_z) <= 0)%Z
    | 10%positive => (1 * (s IDputRGBUAseparate16bittile_z) <= 0 /\ -1 * (s IDputRGBUAseparate16bittile_z) <= 0)%Z
    | 11%positive => (-1 * (s IDputRGBUAseparate16bittile_z) <= 0 /\ 1 * (s IDputRGBUAseparate16bittile_z) <= 0)%Z
    | 12%positive => (-1 * (s IDputRGBUAseparate16bittile_z) <= 0)%Z
    | 13%positive => (-1 * (s IDputRGBUAseparate16bittile_z) <= 0)%Z
    | 14%positive => (-1 * (s IDputRGBUAseparate16bittile_z) <= 0)%Z
    | 15%positive => (-1 * (s IDputRGBUAseparate16bittile_z) <= 0 /\ 1 * (s IDputRGBUAseparate16bittile__tmp) <= 0)%Z
    | 16%positive => (1 * (s IDputRGBUAseparate16bittile__tmp) <= 0 /\ -1 * (s IDputRGBUAseparate16bittile_z) <= 0)%Z
    | 17%positive => (-1 * (s IDputRGBUAseparate16bittile_z) <= 0 /\ -1 * (s IDputRGBUAseparate16bittile__tmp) + 1 <= 0)%Z
    | 18%positive => (-1 * (s IDputRGBUAseparate16bittile__tmp) + 1 <= 0 /\ -1 * (s IDputRGBUAseparate16bittile_z) <= 0)%Z
    | 19%positive => (-1 * (s IDputRGBUAseparate16bittile_z) <= 0 /\ -1 * (s IDputRGBUAseparate16bittile__tmp) + 1 <= 0)%Z
    | 20%positive => (-1 * (s IDputRGBUAseparate16bittile_z) <= 0 /\ -1 * (s IDputRGBUAseparate16bittile__tmp) + 1 <= 0)%Z
    | 21%positive => (-1 * (s IDputRGBUAseparate16bittile__tmp) + 1 <= 0 /\ -1 * (s IDputRGBUAseparate16bittile_z) <= 0)%Z
    | 22%positive => (-1 * (s IDputRGBUAseparate16bittile_z) <= 0 /\ -1 * (s IDputRGBUAseparate16bittile__tmp) + 1 <= 0)%Z
    | 23%positive => (-1 * (s IDputRGBUAseparate16bittile__tmp) + 1 <= 0 /\ -1 * (s IDputRGBUAseparate16bittile_z) <= 0 /\ 1 * (s IDputRGBUAseparate16bittile__tmp1) <= 0)%Z
    | 24%positive => (1 * (s IDputRGBUAseparate16bittile__tmp1) <= 0 /\ -1 * (s IDputRGBUAseparate16bittile_z) <= 0 /\ -1 * (s IDputRGBUAseparate16bittile__tmp) + 1 <= 0)%Z
    | 25%positive => (-1 * (s IDputRGBUAseparate16bittile__tmp) + 1 <= 0 /\ -1 * (s IDputRGBUAseparate16bittile_z) <= 0 /\ 1 * (s IDputRGBUAseparate16bittile__tmp1) <= 0)%Z
    | 26%positive => (1 * (s IDputRGBUAseparate16bittile__tmp1) <= 0 /\ -1 * (s IDputRGBUAseparate16bittile_z) <= 0 /\ -1 * (s IDputRGBUAseparate16bittile__tmp) + 1 <= 0)%Z
    | 27%positive => (-1 * (s IDputRGBUAseparate16bittile__tmp) + 1 <= 0 /\ -1 * (s IDputRGBUAseparate16bittile_z) <= 0 /\ -1 * (s IDputRGBUAseparate16bittile__tmp1) + 1 <= 0)%Z
    | 28%positive => (-1 * (s IDputRGBUAseparate16bittile__tmp1) + 1 <= 0 /\ -1 * (s IDputRGBUAseparate16bittile_z) <= 0 /\ -1 * (s IDputRGBUAseparate16bittile__tmp) + 1 <= 0)%Z
    | 29%positive => (-1 * (s IDputRGBUAseparate16bittile__tmp) + 1 <= 0 /\ -1 * (s IDputRGBUAseparate16bittile_z) <= 0 /\ -1 * (s IDputRGBUAseparate16bittile__tmp1) + 1 <= 0)%Z
    | 30%positive => (-1 * (s IDputRGBUAseparate16bittile__tmp1) + 1 <= 0 /\ -1 * (s IDputRGBUAseparate16bittile_z) <= 0 /\ -1 * (s IDputRGBUAseparate16bittile__tmp) + 1 <= 0)%Z
    | 31%positive => (-1 * (s IDputRGBUAseparate16bittile__tmp) + 1 <= 0 /\ -1 * (s IDputRGBUAseparate16bittile_z) <= 0 /\ -1 * (s IDputRGBUAseparate16bittile__tmp1) + 1 <= 0)%Z
    | 32%positive => (-1 * (s IDputRGBUAseparate16bittile__tmp1) + 1 <= 0 /\ -1 * (s IDputRGBUAseparate16bittile_z) <= 0 /\ -1 * (s IDputRGBUAseparate16bittile__tmp) + 1 <= 0)%Z
    | 33%positive => (-1 * (s IDputRGBUAseparate16bittile__tmp) + 1 <= 0 /\ -1 * (s IDputRGBUAseparate16bittile_z) <= 0 /\ -1 * (s IDputRGBUAseparate16bittile__tmp1) + 1 <= 0)%Z
    | 34%positive => (-1 * (s IDputRGBUAseparate16bittile__tmp1) + 1 <= 0 /\ -1 * (s IDputRGBUAseparate16bittile_z) <= 0 /\ -1 * (s IDputRGBUAseparate16bittile__tmp) + 1 <= 0)%Z
    | _ => False
  end.

Definition putRGBUAseparate16bittile_pot (p : node) (s : state): Q := 
  match p with
    | 1%positive => (max0(-1 + (s IDputRGBUAseparate16bittile_h))
                     + max0(-1 + (s IDputRGBUAseparate16bittile_h)) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile_w)))%Q
    | 2%positive => ((s IDputRGBUAseparate16bittile_z)
                     + max0(-1 + (s IDputRGBUAseparate16bittile_h))
                     + max0(-1 + (s IDputRGBUAseparate16bittile_h)) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile_w)))%Q
    | 3%positive => ((s IDputRGBUAseparate16bittile_z)
                     + max0(-1 + (s IDputRGBUAseparate16bittile_h))
                     + max0(-1 + (s IDputRGBUAseparate16bittile_h)) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile_w)))%Q
    | 4%positive => ((s IDputRGBUAseparate16bittile_z)
                     + max0(-1 + (s IDputRGBUAseparate16bittile_h))
                     + max0(-1 + (s IDputRGBUAseparate16bittile_h)) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile_w)))%Q
    | 5%positive => ((s IDputRGBUAseparate16bittile_z)
                     + max0(-1 + (s IDputRGBUAseparate16bittile_h))
                     + max0(-1 + (s IDputRGBUAseparate16bittile_h)) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile_w)))%Q
    | 6%positive => ((s IDputRGBUAseparate16bittile_z)
                     + max0(-1 + (s IDputRGBUAseparate16bittile_h))
                     + max0(-1 + (s IDputRGBUAseparate16bittile_h)) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile_w)))%Q
    | 7%positive => ((s IDputRGBUAseparate16bittile_z)
                     + max0(-1 + (s IDputRGBUAseparate16bittile_h))
                     + max0(-1 + (s IDputRGBUAseparate16bittile_h)) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile_w)))%Q
    | 8%positive => ((s IDputRGBUAseparate16bittile_z)
                     + max0(-1 + (s IDputRGBUAseparate16bittile__tmp2)) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile_h))
                     + max0(-1 + (s IDputRGBUAseparate16bittile_h)))%Q
    | 9%positive => ((s IDputRGBUAseparate16bittile_z)
                     + max0(-1 + (s IDputRGBUAseparate16bittile__tmp))
                     + max0(-1 + (s IDputRGBUAseparate16bittile__tmp)) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp2)))%Q
    | 10%positive => ((s IDputRGBUAseparate16bittile_z)
                      + max0(-1 + (s IDputRGBUAseparate16bittile__tmp))
                      + max0(-1 + (s IDputRGBUAseparate16bittile__tmp)) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp2)))%Q
    | 11%positive => ((s IDputRGBUAseparate16bittile_z)
                      + max0(-1 + (s IDputRGBUAseparate16bittile__tmp))
                      + max0(-1 + (s IDputRGBUAseparate16bittile__tmp)) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp2)))%Q
    | 12%positive => ((s IDputRGBUAseparate16bittile_z)
                      + max0(-1 + (s IDputRGBUAseparate16bittile__tmp))
                      + max0(-1 + (s IDputRGBUAseparate16bittile__tmp)) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp2)))%Q
    | 13%positive => ((s IDputRGBUAseparate16bittile_z)
                      + max0(-1 + (s IDputRGBUAseparate16bittile__tmp2)) * max0((s IDputRGBUAseparate16bittile__tmp))
                      + max0((s IDputRGBUAseparate16bittile__tmp)))%Q
    | 14%positive => ((s IDputRGBUAseparate16bittile_z)
                      + max0(-1 + (s IDputRGBUAseparate16bittile__tmp2)) * max0((s IDputRGBUAseparate16bittile__tmp))
                      + max0((s IDputRGBUAseparate16bittile__tmp)))%Q
    | 15%positive => ((s IDputRGBUAseparate16bittile_z)
                      + max0(-1 + (s IDputRGBUAseparate16bittile__tmp2)) * max0((s IDputRGBUAseparate16bittile__tmp))
                      + max0((s IDputRGBUAseparate16bittile__tmp)))%Q
    | 16%positive => ((s IDputRGBUAseparate16bittile_z))%Q
    | 17%positive => ((s IDputRGBUAseparate16bittile_z)
                      + max0(-1 + (s IDputRGBUAseparate16bittile__tmp2)) * max0((s IDputRGBUAseparate16bittile__tmp))
                      + max0((s IDputRGBUAseparate16bittile__tmp)))%Q
    | 18%positive => ((1 # 1)
                      + (s IDputRGBUAseparate16bittile__tmp) * max0(-1
                                                                    + 
                                                                    (s IDputRGBUAseparate16bittile__tmp2))
                      + (s IDputRGBUAseparate16bittile_z)
                      + max0(-1 + (s IDputRGBUAseparate16bittile__tmp)))%Q
    | 19%positive => ((1 # 1)
                      + (1 # 2) * (s IDputRGBUAseparate16bittile__tmp) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp1))
                      + (1 # 2) * (s IDputRGBUAseparate16bittile__tmp) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp2))
                      + (s IDputRGBUAseparate16bittile_z)
                      + max0(-1 + (s IDputRGBUAseparate16bittile__tmp))
                      - (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp)) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp1))
                      + (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp)) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp2))
                      + (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp1))
                      - (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp2)))%Q
    | 20%positive => ((1 # 1)
                      + (1 # 2) * (s IDputRGBUAseparate16bittile__tmp) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp1))
                      + (1 # 2) * (s IDputRGBUAseparate16bittile__tmp) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp2))
                      + (s IDputRGBUAseparate16bittile_z)
                      + max0(-1 + (s IDputRGBUAseparate16bittile__tmp))
                      - (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp)) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp1))
                      + (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp)) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp2))
                      + (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp1))
                      - (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp2)))%Q
    | 21%positive => ((1 # 1)
                      + (1 # 2) * (s IDputRGBUAseparate16bittile__tmp) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp2))
                      + (1 # 2) * (s IDputRGBUAseparate16bittile__tmp) * max0((s IDputRGBUAseparate16bittile__tmp1))
                      + (s IDputRGBUAseparate16bittile_z)
                      + max0(-1 + (s IDputRGBUAseparate16bittile__tmp))
                      + (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp)) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp2))
                      - (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp)) * max0((s IDputRGBUAseparate16bittile__tmp1))
                      - (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp2))
                      + (1 # 2) * max0((s IDputRGBUAseparate16bittile__tmp1)))%Q
    | 22%positive => ((1 # 1)
                      + (1 # 2) * (s IDputRGBUAseparate16bittile__tmp) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp1))
                      + (1 # 2) * (s IDputRGBUAseparate16bittile__tmp) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp2))
                      + (s IDputRGBUAseparate16bittile_z)
                      + max0(-1 + (s IDputRGBUAseparate16bittile__tmp))
                      - (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp)) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp1))
                      + (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp)) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp2))
                      - (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp1))
                      - (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp2))
                      + max0((s IDputRGBUAseparate16bittile__tmp1)))%Q
    | 23%positive => ((1 # 1)
                      + (1 # 2) * (s IDputRGBUAseparate16bittile__tmp) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp1))
                      + (1 # 2) * (s IDputRGBUAseparate16bittile__tmp) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp2))
                      + (s IDputRGBUAseparate16bittile_z)
                      + max0(-1 + (s IDputRGBUAseparate16bittile__tmp))
                      - (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp)) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp1))
                      + (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp)) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp2))
                      - (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp1))
                      - (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp2))
                      + max0((s IDputRGBUAseparate16bittile__tmp1)))%Q
    | 24%positive => ((1 # 1) + (s IDputRGBUAseparate16bittile_z)
                      + max0(-1 + (s IDputRGBUAseparate16bittile__tmp))
                      + max0(-1 + (s IDputRGBUAseparate16bittile__tmp)) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp2)))%Q
    | 25%positive => ((1 # 1) + (s IDputRGBUAseparate16bittile_z)
                      + max0(-1 + (s IDputRGBUAseparate16bittile__tmp))
                      + max0(-1 + (s IDputRGBUAseparate16bittile__tmp)) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp2)))%Q
    | 26%positive => ((1 # 1) + (s IDputRGBUAseparate16bittile_z)
                      + max0(-1 + (s IDputRGBUAseparate16bittile__tmp))
                      + max0(-1 + (s IDputRGBUAseparate16bittile__tmp)) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp2)))%Q
    | 27%positive => ((1 # 1)
                      + (1 # 2) * (s IDputRGBUAseparate16bittile__tmp) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp1))
                      + (1 # 2) * (s IDputRGBUAseparate16bittile__tmp) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp2))
                      + (s IDputRGBUAseparate16bittile_z)
                      + max0(-1 + (s IDputRGBUAseparate16bittile__tmp))
                      - (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp)) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp1))
                      + (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp)) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp2))
                      - (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp1))
                      - (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp2))
                      + max0((s IDputRGBUAseparate16bittile__tmp1)))%Q
    | 28%positive => ((2 # 1)
                      + (1 # 2) * (s IDputRGBUAseparate16bittile__tmp) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp1))
                      + (1 # 2) * (s IDputRGBUAseparate16bittile__tmp) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp2))
                      + (s IDputRGBUAseparate16bittile_z)
                      + max0(-1 + (s IDputRGBUAseparate16bittile__tmp))
                      - (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp)) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp1))
                      + (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp)) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp2))
                      + (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp1))
                      - (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp2)))%Q
    | 29%positive => ((2 # 1)
                      + (1 # 2) * (s IDputRGBUAseparate16bittile__tmp) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp1))
                      + (1 # 2) * (s IDputRGBUAseparate16bittile__tmp) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp2))
                      + (s IDputRGBUAseparate16bittile_z)
                      + max0(-1 + (s IDputRGBUAseparate16bittile__tmp))
                      - (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp)) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp1))
                      + (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp)) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp2))
                      + (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp1))
                      - (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp2)))%Q
    | 30%positive => ((2 # 1)
                      + (1 # 2) * (s IDputRGBUAseparate16bittile__tmp) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp1))
                      + (1 # 2) * (s IDputRGBUAseparate16bittile__tmp) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp2))
                      + (s IDputRGBUAseparate16bittile_z)
                      + max0(-1 + (s IDputRGBUAseparate16bittile__tmp))
                      - (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp)) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp1))
                      + (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp)) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp2))
                      + (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp1))
                      - (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp2)))%Q
    | 31%positive => ((2 # 1)
                      + (1 # 2) * (s IDputRGBUAseparate16bittile__tmp) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp1))
                      + (1 # 2) * (s IDputRGBUAseparate16bittile__tmp) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp2))
                      + (s IDputRGBUAseparate16bittile_z)
                      + max0(-1 + (s IDputRGBUAseparate16bittile__tmp))
                      - (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp)) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp1))
                      + (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp)) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp2))
                      + (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp1))
                      - (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp2)))%Q
    | 32%positive => ((2 # 1)
                      + (1 # 2) * (s IDputRGBUAseparate16bittile__tmp) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp1))
                      + (1 # 2) * (s IDputRGBUAseparate16bittile__tmp) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp2))
                      + (s IDputRGBUAseparate16bittile_z)
                      + max0(-1 + (s IDputRGBUAseparate16bittile__tmp))
                      - (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp)) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp1))
                      + (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp)) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp2))
                      + (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp1))
                      - (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp2)))%Q
    | 33%positive => ((2 # 1)
                      + (1 # 2) * (s IDputRGBUAseparate16bittile__tmp) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp1))
                      + (1 # 2) * (s IDputRGBUAseparate16bittile__tmp) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp2))
                      + (s IDputRGBUAseparate16bittile_z)
                      + max0(-1 + (s IDputRGBUAseparate16bittile__tmp))
                      - (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp)) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp1))
                      + (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp)) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp2))
                      + (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp1))
                      - (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp2)))%Q
    | 34%positive => ((2 # 1)
                      + (1 # 2) * (s IDputRGBUAseparate16bittile__tmp) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp1))
                      + (1 # 2) * (s IDputRGBUAseparate16bittile__tmp) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp2))
                      + (s IDputRGBUAseparate16bittile_z)
                      + max0(-1 + (s IDputRGBUAseparate16bittile__tmp))
                      - (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp)) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp1))
                      + (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp)) * max0(-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp2))
                      + (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp1))
                      - (1 # 2) * max0(-1
                                       + (s IDputRGBUAseparate16bittile__tmp2)))%Q
    | _ => (0 # 1)%Q
  end.

Definition putRGBUAseparate16bittile_hints (p : node) (s : state) := 
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
    | 13%positive => []
    | 14%positive => []
    | 15%positive => [(*-1 0*) F_max0_monotonic (F_check_ge ((s IDputRGBUAseparate16bittile__tmp)) (-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp)));
                      (*-1 0*) F_max0_ge_0 (-1
                                            + (s IDputRGBUAseparate16bittile__tmp));
                      (*-1 0*) F_product (F_binom_monotonic 1 (F_max0_ge_0 (-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp2))) (F_check_ge (0) (0))) (F_binom_monotonic 1 (F_max0_ge_0 ((s IDputRGBUAseparate16bittile__tmp))) (F_check_ge (0) (0)))]
    | 16%positive => []
    | 17%positive => [(*-1 0*) F_max0_pre_decrement ((s IDputRGBUAseparate16bittile__tmp)) (1);
                      (*-1 0*) F_product (F_binom_monotonic 1 (F_max0_ge_arg ((s IDputRGBUAseparate16bittile__tmp))) (F_check_ge ((s IDputRGBUAseparate16bittile__tmp)) (0))) (F_binom_monotonic 1 (F_max0_ge_0 (-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp2))) (F_check_ge (0) (0)))]
    | 18%positive => []
    | 19%positive => []
    | 20%positive => []
    | 21%positive => [(*-0.5 0*) F_product (F_binom_monotonic 1 (F_max0_le_arg (F_check_ge (-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp)) (0))) (F_max0_ge_0 (-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp)))) (F_binom_monotonic 1 (F_max0_ge_0 ((s IDputRGBUAseparate16bittile__tmp1))) (F_check_ge (0) (0)));
                      (*0 0.5*) F_product (F_binom_monotonic 1 (F_max0_ge_arg (-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp))) (F_check_ge (-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp)) (0))) (F_binom_monotonic 1 (F_max0_ge_0 (-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp1))) (F_check_ge (0) (0)))]
    | 22%positive => []
    | 23%positive => [(*-0.5 0*) F_product (F_binom_monotonic 1 (F_max0_le_arg (F_check_ge (-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp)) (0))) (F_max0_ge_0 (-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp)))) (F_binom_monotonic 1 (F_max0_ge_0 (-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp1))) (F_check_ge (0) (0)));
                      (*-0.5 0*) F_product (F_binom_monotonic 1 (F_max0_le_arg (F_check_ge (-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp)) (0))) (F_max0_ge_0 (-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp)))) (F_binom_monotonic 1 (F_max0_ge_0 (-1
                                                                    + (s IDputRGBUAseparate16bittile__tmp2))) (F_check_ge (0) (0)));
                      (*-1 0*) F_binom_monotonic 1 (F_max0_ge_0 ((s IDputRGBUAseparate16bittile__tmp1))) (F_check_ge (0) (0))]
    | 24%positive => []
    | 25%positive => []
    | 26%positive => []
    | 27%positive => [(*-1 0*) F_max0_pre_decrement ((s IDputRGBUAseparate16bittile__tmp1)) (1)]
    | 28%positive => []
    | 29%positive => []
    | 30%positive => []
    | 31%positive => []
    | 32%positive => []
    | 33%positive => []
    | 34%positive => []
    | _ => []
  end.


Theorem putRGBUAseparate16bittile_ai_correct:
  forall s p' s', steps (g_start putRGBUAseparate16bittile) s (g_edges putRGBUAseparate16bittile) p' s' -> putRGBUAseparate16bittile_ai p' s'.
Proof.
  check_ai.
Qed.

Theorem putRGBUAseparate16bittile_pot_correct:
  forall s p' s',
    steps (g_start putRGBUAseparate16bittile) s (g_edges putRGBUAseparate16bittile) p' s' ->
    (putRGBUAseparate16bittile_pot (g_start putRGBUAseparate16bittile) s >= putRGBUAseparate16bittile_pot p' s')%Q.
Proof.
  check_lp putRGBUAseparate16bittile_ai_correct putRGBUAseparate16bittile_hints.
Qed.

