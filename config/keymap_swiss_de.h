/* Copyright 2016 heartsekai
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <behaviors.dtsi>
#include <dt-bindings/zmk/keys.h>
#include <dt-bindings/zmk/bt.h>
#include <dt-bindings/zmk/outputs.h>

// clang-format off

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ § │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ' │ ^ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ W │ E │ R │ T │ Z │ U │ I │ O │ P │ ü │ ¨ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ö │ ä │ $ │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ Y │ X │ C │ V │ B │ N │ M │ , │ . │ - │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
//#define CH_SECT TILDE // § (didn't find that one)
#define CH_1    N1    // 1
#define CH_2    N2    // 2
#define CH_3    N3    // 3
#define CH_4    N4    // 4
#define CH_5    N5    // 5
#define CH_6    N6    // 6
#define CH_7    N7    // 7
#define CH_8    N8    // 8
#define CH_9    N9    // 9
#define CH_0    N0    // 0
#define CH_QUOT MINUS // '
#define CH_CIRC GRAVE // ^ (dead)
// Row 2
#define CH_Q    Q    // Q
#define CH_W    W    // W
#define CH_E    E    // E
#define CH_R    R    // R
#define CH_T    T    // T
#define CH_Z    Y    // Z
#define CH_U    U    // U
#define CH_I    I    // I
#define CH_O    O    // O
#define CH_P    P    // P
#define CH_UDIA LBKT // Ü
#define CH_DIAE RBKT // ¨ (dead)
// Row 3
#define CH_A    A    // A
#define CH_S    S    // S
#define CH_D    D    // D
#define CH_F    F    // F
#define CH_G    G    // G
#define CH_H    H    // H
#define CH_J    J    // J
#define CH_K    K    // K
#define CH_L    L    // L
#define CH_ODIA SEMI // Ö
#define CH_ADIA SQT  // Ä
#define CH_DLR  NUHS // $
// Row 4
#define CH_LABK NUBS // <
#define CH_Y    Z    // Y
#define CH_X    X    // X
#define CH_C    C    // C
#define CH_V    V    // V
#define CH_B    B    // B
#define CH_N    N    // N
#define CH_M    M    // M
#define CH_COMM COMMA // ,
#define CH_DOT  DOT  // .
#define CH_MINS FSLH // -

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ° │ + │ " │ * │ ç │ % │ & │ / │ ( │ ) │ = │ ? │ ` │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ è │ ! │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │ é │ à │ £ │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
//#define CH_DEG  LS(CH_SECT) // °
#define CH_PLUS LS(CH_1)    // +
#define CH_DQUO LS(CH_2)    // "
#define CH_ASTR LS(CH_3)    // *
#define CH_CCED LS(CH_4)    // ç
#define CH_PERC LS(CH_5)    // %
#define CH_AMPR LS(CH_6)    // &
#define CH_SLSH LS(CH_7)    // /
#define CH_LPRN LS(CH_8)    // (
#define CH_RPRN LS(CH_9)    // )
#define CH_EQL  LS(CH_0)    // =
#define CH_QUES LS(CH_QUOT) // ?
#define CH_GRV  LS(CH_CIRC) // ` (dead)
// Row 2
#define CH_EGRV LS(CH_UDIA) // è
#define CH_EXLM LS(CH_DIAE) // !
// Row 3
#define CH_EACU LS(CH_ODIA) // é
#define CH_AGRV LS(CH_ADIA) // à
#define CH_PND  LS(CH_DLR)  // £
// Row 4
#define CH_RABK LS(CH_LABK) // >
#define CH_SCLN LS(CH_COMM) // ;
#define CH_COLN LS(CH_DOT)  // :
#define CH_UNDS LS(CH_MINS) // _

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │ ¦ │ @ │ # │   │   │ ¬ │ | │ ¢ │   │   │ ´ │ ~ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │ € │   │   │   │   │   │   │   │ [ │ ] │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │ { │ } │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ \ │   │   │   │   │   │   │   │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define CH_BRKP RA(CH_1)    // ¦
#define CH_AT   RA(CH_2)    // @
#define CH_HASH RA(CH_3)    // #
#define CH_NOT  RA(CH_6)    // ¬
#define CH_PIPE RA(CH_7)    // |
#define CH_CENT RA(CH_8)    // ¢
#define CH_ACUT RA(CH_QUOT) // ´ (dead)
#define CH_TILD RA(CH_CIRC) // ~ (dead)
// Row 2
#define CH_EURO RA(CH_E)    // €
#define CH_LBRC RA(CH_UDIA) // [
#define CH_RBRC RA(CH_DIAE) // ]
// Row 3
#define CH_LCBR RA(CH_ADIA) // {
#define CH_RCBR RA(CH_DLR)  // }
// Row 4
#define CH_BSLS RA(CH_LABK) // (backslash)
