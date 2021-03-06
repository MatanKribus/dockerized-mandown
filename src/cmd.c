/**
 * Copyright (C) 2019 Tianze Han
 * 
 * This file is part of Mandown.
 * 
 * Mandown is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * Mandown is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with Mandown.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "cmd.h"

#include "st_curses.h"

mdn_command less_cmd_scheme(int key)
{
  switch (key) {
    case 'i': {
      return CMD_MOUSE_TOGGLE;
    }
    case 'q': {
      return CMD_EXIT;
    }
    case TAB: {
      return CMD_SELECT_HREF;
    }
    case ENTER: {
      return CMD_COMFIRM;
    }
    case 'e':
    case 'j':
    case KEY_DOWN: {
      return CMD_MOVE_DOWN;
    }
    case 'y':
    case 'k':
    case KEY_UP: {
      return CMD_MOVE_UP;
    }
    case 'f':
    case ' ': 
    case KEY_NPAGE: {
      return CMD_MOVE_NPAGE;
    }
    case 'b':
    case KEY_PPAGE: {
      return CMD_MOVE_PPAGE;
    }
    case 'g':
    case KEY_HOME: {
      return CMD_MOVE_TOP;
    }
    case 'G':
    case KEY_END: {
      return CMD_MOVE_EOF;
    }
    case KEY_RESIZE: {
      return CMD_RESIZE_EVENT;
    }
    case KEY_MOUSE: {
      return CMD_MOUSE_EVENT;
    }
    case ERR:
    default: {
      return CMD_ERR;
    }
  }
}

mdn_command mdn_cmd_scheme(int key)
{
  switch (key) {
    case 'i': {
      return CMD_MOUSE_TOGGLE;
    }
    case 'q': {
      return CMD_EXIT;
    }
    case TAB: {
      return CMD_SELECT_HREF;
    }
    case ENTER: {
      return CMD_COMFIRM;
    }
    case 's':
    case KEY_DOWN: {
      return CMD_MOVE_DOWN;
    }
    case 'w':
    case KEY_UP: {
      return CMD_MOVE_UP;
    }
    case 'S':
    case KEY_NPAGE: {
      return CMD_MOVE_NPAGE;
    }
    case 'W':
    case KEY_PPAGE: {
      return CMD_MOVE_PPAGE;
    }
    case 'g':
    case KEY_HOME: {
      return CMD_MOVE_TOP;
    }
    case 'G':
    case KEY_END: {
      return CMD_MOVE_EOF;
    }
    case KEY_RESIZE: {
      return CMD_RESIZE_EVENT;
    }
    case KEY_MOUSE: {
      return CMD_MOUSE_EVENT;
    }
    case ERR:
    default: {
      return CMD_ERR;
    }
  }
}

mdn_command vim_cmd_scheme(int key)
{
  switch (key) {
    case 'i': {
      return CMD_MOUSE_TOGGLE;
    }

    case 'q': {
      return CMD_EXIT;
    }
    case 'j': {
      return CMD_MOVE_DOWN;
    }
    case 'k': {
      return CMD_MOVE_UP;
    }
    case 'g': {
      return CMD_MOVE_TOP;
    }
    case 'G': {
      return CMD_MOVE_EOF;
    }
    case CTRL('b'): {
      return CMD_MOVE_PPAGE;
    }
    case CTRL('f'): {
      return CMD_MOVE_NPAGE;
    }
    case TAB: {
      return CMD_SELECT_HREF;
    }
    case ENTER: {
      return CMD_COMFIRM;
    }
    case KEY_RESIZE: {
      return CMD_RESIZE_EVENT;
    }
    case KEY_MOUSE: {
      return CMD_MOUSE_EVENT;
    }
    default: {
      return CMD_ERR;
    }
  }
}
