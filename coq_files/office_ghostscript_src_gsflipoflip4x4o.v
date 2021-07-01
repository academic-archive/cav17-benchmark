Add LoadPath "coq".
Require Import Pasta.

Notation IDflip4x4_z := 1%positive.
Notation IDflip4x4__tmp := 2%positive.
Notation IDflip4x4__tmp1 := 3%positive.
Notation IDflip4x4_b1 := 4%positive.
Notation IDflip4x4_b2 := 5%positive.
Notation IDflip4x4_b3 := 6%positive.
Notation IDflip4x4_b4 := 7%positive.
Notation IDflip4x4_n := 8%positive.
Notation IDflip4x4_buffer := 9%positive.
Notation IDflip4x4_nbytes := 10%positive.
Notation IDflip4x4_offset := 11%positive.
Notation IDflip4x4_planes := 12%positive.
Definition flip4x4 : graph := {|
  g_start := 1%positive;
  g_end := 11%positive;
  g_edges := (1%positive,(AAssign IDflip4x4_z (Some (ENum (0)))),2%positive)::
             (2%positive,(AGuard (fun s => ((eval (EVar IDflip4x4_n) s) >=
             (eval (ENum (0)) s))%Z)),3%positive)::
             (3%positive,AWeaken,4%positive)::
             (4%positive,(AAssign IDflip4x4__tmp1
             (Some (EVar IDflip4x4_offset))),5%positive)::
             (5%positive,(AAssign IDflip4x4__tmp
             (Some (EVar IDflip4x4_nbytes))),6%positive)::
             (6%positive,(AAssign IDflip4x4_n (Some (EVar IDflip4x4__tmp))),
             7%positive)::(7%positive,ANone,8%positive)::
             (8%positive,AWeaken,9%positive)::
             (9%positive,(AGuard (fun s => ((eval (EVar IDflip4x4_n) s) >
             (eval (ENum (0)) s))%Z)),12%positive)::
             (9%positive,(AGuard (fun s => ((eval (EVar IDflip4x4_n) s) <=
             (eval (ENum (0)) s))%Z)),10%positive)::
             (10%positive,AWeaken,11%positive)::
             (12%positive,AWeaken,13%positive)::
             (13%positive,(AAssign IDflip4x4_b1 None),14%positive)::
             (14%positive,(AAssign IDflip4x4_b2 None),15%positive)::
             (15%positive,(AAssign IDflip4x4_b3 None),16%positive)::
             (16%positive,(AAssign IDflip4x4_b4 None),17%positive)::
             (17%positive,ANone,18%positive)::
             (18%positive,(AAssign IDflip4x4_n (Some (EAdd (EVar IDflip4x4_n)
             (ENum (-1))))),19%positive)::(19%positive,ANone,20%positive)::
             (20%positive,ANone,21%positive)::
             (21%positive,(AAssign IDflip4x4_z (Some (EAdd (ENum (1))
             (EVar IDflip4x4_z)))),22%positive)::
             (22%positive,AWeaken,9%positive)::nil
|}.

Definition flip4x4_ai (p: node) (s: state) := 
  match p with
    | 1%positive => (True)%Z
    | 2%positive => (1 * (s IDflip4x4_z) <= 0 /\ -1 * (s IDflip4x4_z) <= 0)%Z
    | 3%positive => (-1 * (s IDflip4x4_z) <= 0 /\ 1 * (s IDflip4x4_z) <= 0 /\ -1 * (s IDflip4x4_n) <= 0)%Z
    | 4%positive => (-1 * (s IDflip4x4_n) <= 0 /\ 1 * (s IDflip4x4_z) <= 0 /\ -1 * (s IDflip4x4_z) <= 0)%Z
    | 5%positive => (-1 * (s IDflip4x4_z) <= 0 /\ 1 * (s IDflip4x4_z) <= 0 /\ -1 * (s IDflip4x4_n) <= 0)%Z
    | 6%positive => (-1 * (s IDflip4x4_n) <= 0 /\ 1 * (s IDflip4x4_z) <= 0 /\ -1 * (s IDflip4x4_z) <= 0)%Z
    | 7%positive => (-1 * (s IDflip4x4_z) <= 0 /\ 1 * (s IDflip4x4_z) <= 0)%Z
    | 8%positive => (1 * (s IDflip4x4_z) <= 0 /\ -1 * (s IDflip4x4_z) <= 0)%Z
    | 9%positive => (-1 * (s IDflip4x4_z) <= 0)%Z
    | 10%positive => (-1 * (s IDflip4x4_z) <= 0 /\ 1 * (s IDflip4x4_n) <= 0)%Z
    | 11%positive => (1 * (s IDflip4x4_n) <= 0 /\ -1 * (s IDflip4x4_z) <= 0)%Z
    | 12%positive => (-1 * (s IDflip4x4_z) <= 0 /\ -1 * (s IDflip4x4_n) + 1 <= 0)%Z
    | 13%positive => (-1 * (s IDflip4x4_n) + 1 <= 0 /\ -1 * (s IDflip4x4_z) <= 0)%Z
    | 14%positive => (-1 * (s IDflip4x4_z) <= 0 /\ -1 * (s IDflip4x4_n) + 1 <= 0)%Z
    | 15%positive => (-1 * (s IDflip4x4_n) + 1 <= 0 /\ -1 * (s IDflip4x4_z) <= 0)%Z
    | 16%positive => (-1 * (s IDflip4x4_z) <= 0 /\ -1 * (s IDflip4x4_n) + 1 <= 0)%Z
    | 17%positive => (-1 * (s IDflip4x4_n) + 1 <= 0 /\ -1 * (s IDflip4x4_z) <= 0)%Z
    | 18%positive => (-1 * (s IDflip4x4_z) <= 0 /\ -1 * (s IDflip4x4_n) + 1 <= 0)%Z
    | 19%positive => (-1 * (s IDflip4x4_z) <= 0 /\ -1 * (s IDflip4x4_n) <= 0)%Z
    | 20%positive => (-1 * (s IDflip4x4_n) <= 0 /\ -1 * (s IDflip4x4_z) <= 0)%Z
    | 21%positive => (-1 * (s IDflip4x4_z) <= 0 /\ -1 * (s IDflip4x4_n) <= 0)%Z
    | 22%positive => (-1 * (s IDflip4x4_n) <= 0 /\ -1 * (s IDflip4x4_z) + 1 <= 0)%Z
    | _ => False
  end.

Definition flip4x4_pot (p : node) (s : state): Q := 
  match p with
    | 1%positive => (max0((s IDflip4x4_nbytes)))%Q
    | 2%positive => ((s IDflip4x4_z) + max0((s IDflip4x4_nbytes)))%Q
    | 3%positive => ((s IDflip4x4_z) + max0((s IDflip4x4_nbytes)))%Q
    | 4%positive => ((s IDflip4x4_z) + max0((s IDflip4x4_nbytes)))%Q
    | 5%positive => ((s IDflip4x4_z) + max0((s IDflip4x4_nbytes)))%Q
    | 6%positive => ((s IDflip4x4_z) + max0((s IDflip4x4__tmp)))%Q
    | 7%positive => ((s IDflip4x4_z) + max0((s IDflip4x4_n)))%Q
    | 8%positive => ((s IDflip4x4_z) + max0((s IDflip4x4_n)))%Q
    | 9%positive => ((s IDflip4x4_z) + max0((s IDflip4x4_n)))%Q
    | 10%positive => ((s IDflip4x4_z) + max0((s IDflip4x4_n)))%Q
    | 11%positive => ((s IDflip4x4_z))%Q
    | 12%positive => ((s IDflip4x4_z) + max0((s IDflip4x4_n)))%Q
    | 13%positive => ((1 # 1) + (s IDflip4x4_z) + max0(-1 + (s IDflip4x4_n)))%Q
    | 14%positive => ((1 # 1) + (s IDflip4x4_z) + max0(-1 + (s IDflip4x4_n)))%Q
    | 15%positive => ((1 # 1) + (s IDflip4x4_z) + max0(-1 + (s IDflip4x4_n)))%Q
    | 16%positive => ((1 # 1) + (s IDflip4x4_z) + max0(-1 + (s IDflip4x4_n)))%Q
    | 17%positive => ((1 # 1) + (s IDflip4x4_z) + max0(-1 + (s IDflip4x4_n)))%Q
    | 18%positive => ((1 # 1) + (s IDflip4x4_z) + max0(-1 + (s IDflip4x4_n)))%Q
    | 19%positive => ((1 # 1) + (s IDflip4x4_z) + max0((s IDflip4x4_n)))%Q
    | 20%positive => ((1 # 1) + (s IDflip4x4_z) + max0((s IDflip4x4_n)))%Q
    | 21%positive => ((1 # 1) + (s IDflip4x4_z) + max0((s IDflip4x4_n)))%Q
    | 22%positive => ((s IDflip4x4_z) + max0((s IDflip4x4_n)))%Q
    | _ => (0 # 1)%Q
  end.

Definition flip4x4_hints (p : node) (s : state) := 
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
    | 10%positive => [(*-1 0*) F_max0_monotonic (F_check_ge ((s IDflip4x4_n)) (-1
                                                                    + (s IDflip4x4_n)));
                      (*-1 0*) F_max0_ge_0 (-1 + (s IDflip4x4_n))]
    | 11%positive => []
    | 12%positive => [(*-1 0*) F_max0_pre_decrement ((s IDflip4x4_n)) (1)]
    | 13%positive => []
    | 14%positive => []
    | 15%positive => []
    | 16%positive => []
    | 17%positive => []
    | 18%positive => []
    | 19%positive => []
    | 20%positive => []
    | 21%positive => []
    | 22%positive => []
    | _ => []
  end.


Theorem flip4x4_ai_correct:
  forall s p' s', steps (g_start flip4x4) s (g_edges flip4x4) p' s' -> flip4x4_ai p' s'.
Proof.
  check_ai.
Qed.

Theorem flip4x4_pot_correct:
  forall s p' s',
    steps (g_start flip4x4) s (g_edges flip4x4) p' s' ->
    (flip4x4_pot (g_start flip4x4) s >= flip4x4_pot p' s')%Q.
Proof.
  check_lp flip4x4_ai_correct flip4x4_hints.
Qed.

