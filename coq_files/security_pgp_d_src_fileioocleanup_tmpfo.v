Add LoadPath "coq".
Require Import Pasta.

Notation IDcleanup_tmpf_z := 1%positive.
Notation IDcleanup_tmpf_i := 2%positive.
Definition cleanup_tmpf : graph := {|
  g_start := 1%positive;
  g_end := 7%positive;
  g_edges := (1%positive,(AAssign IDcleanup_tmpf_z (Some (ENum (0)))),
             2%positive)::
             (2%positive,(AAssign IDcleanup_tmpf_i (Some (ENum (0)))),
             3%positive)::(3%positive,ANone,4%positive)::
             (4%positive,AWeaken,5%positive)::
             (5%positive,(AGuard (fun s => ((eval (EVar IDcleanup_tmpf_i)
             s) < (eval (ENum (8)) s))%Z)),8%positive)::
             (5%positive,(AGuard (fun s => ((eval (EVar IDcleanup_tmpf_i)
             s) >= (eval (ENum (8)) s))%Z)),6%positive)::
             (6%positive,AWeaken,7%positive)::
             (8%positive,AWeaken,9%positive)::
             (9%positive,ANone,10%positive)::(9%positive,ANone,11%positive)::
             (10%positive,ANone,11%positive)::
             (11%positive,ANone,12%positive)::
             (12%positive,(AAssign IDcleanup_tmpf_i
             (Some (EAdd (EVar IDcleanup_tmpf_i) (ENum (1))))),13%positive)::
             (13%positive,ANone,14%positive)::
             (14%positive,ANone,15%positive)::
             (15%positive,(AAssign IDcleanup_tmpf_z (Some (EAdd (ENum (1))
             (EVar IDcleanup_tmpf_z)))),16%positive)::
             (16%positive,AWeaken,5%positive)::nil
|}.

Definition cleanup_tmpf_ai (p: node) (s: state) := 
  match p with
    | 1%positive => (True)%Z
    | 2%positive => (1 * (s IDcleanup_tmpf_z) <= 0 /\ -1 * (s IDcleanup_tmpf_z) <= 0)%Z
    | 3%positive => (-1 * (s IDcleanup_tmpf_z) <= 0 /\ 1 * (s IDcleanup_tmpf_z) <= 0 /\ 1 * (s IDcleanup_tmpf_i) <= 0 /\ -1 * (s IDcleanup_tmpf_i) <= 0)%Z
    | 4%positive => (-1 * (s IDcleanup_tmpf_i) <= 0 /\ 1 * (s IDcleanup_tmpf_i) <= 0 /\ 1 * (s IDcleanup_tmpf_z) <= 0 /\ -1 * (s IDcleanup_tmpf_z) <= 0)%Z
    | 5%positive => (-1 * (s IDcleanup_tmpf_z) <= 0 /\ -1 * (s IDcleanup_tmpf_i) <= 0 /\ 1 * (s IDcleanup_tmpf_i) + -8 <= 0)%Z
    | 6%positive => (1 * (s IDcleanup_tmpf_i) + -8 <= 0 /\ -1 * (s IDcleanup_tmpf_z) <= 0 /\ -1 * (s IDcleanup_tmpf_i) + 8 <= 0)%Z
    | 7%positive => (-1 * (s IDcleanup_tmpf_i) + 8 <= 0 /\ -1 * (s IDcleanup_tmpf_z) <= 0 /\ 1 * (s IDcleanup_tmpf_i) + -8 <= 0)%Z
    | 8%positive => (-1 * (s IDcleanup_tmpf_i) <= 0 /\ -1 * (s IDcleanup_tmpf_z) <= 0 /\ 1 * (s IDcleanup_tmpf_i) + -7 <= 0)%Z
    | 9%positive => (1 * (s IDcleanup_tmpf_i) + -7 <= 0 /\ -1 * (s IDcleanup_tmpf_z) <= 0 /\ -1 * (s IDcleanup_tmpf_i) <= 0)%Z
    | 10%positive => (-1 * (s IDcleanup_tmpf_i) <= 0 /\ -1 * (s IDcleanup_tmpf_z) <= 0 /\ 1 * (s IDcleanup_tmpf_i) + -7 <= 0)%Z
    | 11%positive => (1 * (s IDcleanup_tmpf_i) + -7 <= 0 /\ -1 * (s IDcleanup_tmpf_z) <= 0 /\ -1 * (s IDcleanup_tmpf_i) <= 0)%Z
    | 12%positive => (-1 * (s IDcleanup_tmpf_i) <= 0 /\ -1 * (s IDcleanup_tmpf_z) <= 0 /\ 1 * (s IDcleanup_tmpf_i) + -7 <= 0)%Z
    | 13%positive => (-1 * (s IDcleanup_tmpf_z) <= 0 /\ -1 * (s IDcleanup_tmpf_i) + 1 <= 0 /\ 1 * (s IDcleanup_tmpf_i) + -8 <= 0)%Z
    | 14%positive => (1 * (s IDcleanup_tmpf_i) + -8 <= 0 /\ -1 * (s IDcleanup_tmpf_i) + 1 <= 0 /\ -1 * (s IDcleanup_tmpf_z) <= 0)%Z
    | 15%positive => (-1 * (s IDcleanup_tmpf_z) <= 0 /\ -1 * (s IDcleanup_tmpf_i) + 1 <= 0 /\ 1 * (s IDcleanup_tmpf_i) + -8 <= 0)%Z
    | 16%positive => (1 * (s IDcleanup_tmpf_i) + -8 <= 0 /\ -1 * (s IDcleanup_tmpf_i) + 1 <= 0 /\ -1 * (s IDcleanup_tmpf_z) + 1 <= 0)%Z
    | _ => False
  end.

Definition cleanup_tmpf_pot (p : node) (s : state): Q := 
  match p with
    | 1%positive => ((8 # 1))%Q
    | 2%positive => ((8 # 1) + (s IDcleanup_tmpf_z))%Q
    | 3%positive => ((s IDcleanup_tmpf_z) + max0(8 - (s IDcleanup_tmpf_i)))%Q
    | 4%positive => ((s IDcleanup_tmpf_z) + max0(8 - (s IDcleanup_tmpf_i)))%Q
    | 5%positive => ((s IDcleanup_tmpf_z) + max0(8 - (s IDcleanup_tmpf_i)))%Q
    | 6%positive => ((s IDcleanup_tmpf_z) + max0(8 - (s IDcleanup_tmpf_i)))%Q
    | 7%positive => ((s IDcleanup_tmpf_z))%Q
    | 8%positive => ((s IDcleanup_tmpf_z) + max0(8 - (s IDcleanup_tmpf_i)))%Q
    | 9%positive => ((1 # 1) + (s IDcleanup_tmpf_z)
                     + max0(7 - (s IDcleanup_tmpf_i)))%Q
    | 10%positive => ((1 # 1) + (s IDcleanup_tmpf_z)
                      + max0(7 - (s IDcleanup_tmpf_i)))%Q
    | 11%positive => ((1 # 1) + (s IDcleanup_tmpf_z)
                      + max0(7 - (s IDcleanup_tmpf_i)))%Q
    | 12%positive => ((1 # 1) + (s IDcleanup_tmpf_z)
                      + max0(7 - (s IDcleanup_tmpf_i)))%Q
    | 13%positive => ((1 # 1) + (s IDcleanup_tmpf_z)
                      + max0(8 - (s IDcleanup_tmpf_i)))%Q
    | 14%positive => ((1 # 1) + (s IDcleanup_tmpf_z)
                      + max0(8 - (s IDcleanup_tmpf_i)))%Q
    | 15%positive => ((1 # 1) + (s IDcleanup_tmpf_z)
                      + max0(8 - (s IDcleanup_tmpf_i)))%Q
    | 16%positive => ((s IDcleanup_tmpf_z) + max0(8 - (s IDcleanup_tmpf_i)))%Q
    | _ => (0 # 1)%Q
  end.

Definition cleanup_tmpf_hints (p : node) (s : state) := 
  match p with
    | 1%positive => []
    | 2%positive => []
    | 3%positive => []
    | 4%positive => []
    | 5%positive => []
    | 6%positive => [(*-1 0*) F_max0_monotonic (F_check_ge (8
                                                            - (s IDcleanup_tmpf_i)) (7
                                                                    - (s IDcleanup_tmpf_i)));
                     (*-1 0*) F_binom_monotonic 1 (F_max0_ge_0 (7
                                                                - (s IDcleanup_tmpf_i))) (F_check_ge (0) (0))]
    | 7%positive => []
    | 8%positive => [(*-1 0*) F_max0_pre_decrement (8 - (s IDcleanup_tmpf_i)) (1)]
    | 9%positive => []
    | 10%positive => []
    | 11%positive => []
    | 12%positive => []
    | 13%positive => []
    | 14%positive => []
    | 15%positive => []
    | 16%positive => []
    | _ => []
  end.


Theorem cleanup_tmpf_ai_correct:
  forall s p' s', steps (g_start cleanup_tmpf) s (g_edges cleanup_tmpf) p' s' -> cleanup_tmpf_ai p' s'.
Proof.
  check_ai.
Qed.

Theorem cleanup_tmpf_pot_correct:
  forall s p' s',
    steps (g_start cleanup_tmpf) s (g_edges cleanup_tmpf) p' s' ->
    (cleanup_tmpf_pot (g_start cleanup_tmpf) s >= cleanup_tmpf_pot p' s')%Q.
Proof.
  check_lp cleanup_tmpf_ai_correct cleanup_tmpf_hints.
Qed.

