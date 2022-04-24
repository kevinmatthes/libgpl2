%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%
%% Copyright (C) 2022 Kevin Matthes
%%
%% This program is free software; you can redistribute it and/or modify
%% it under the terms of the GNU General Public License as published by
%% the Free Software Foundation; either version 2 of the License, or
%% (at your option) any later version.
%%
%% This program is distributed in the hope that it will be useful,
%% but WITHOUT ANY WARRANTY; without even the implied warranty of
%% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
%% GNU General Public License for more details.
%%
%% You should have received a copy of the GNU General Public License along
%% with this program; if not, write to the Free Software Foundation, Inc.,
%% 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
%%
%%%%
%%
%%  FILE
%%      gcc-ar.m
%%
%%  BRIEF
%%      Create a static library from C source code using GCC and `ar`.
%%
%%  AUTHOR
%%      Kevin Matthes
%%
%%  COPYRIGHT
%%      (C) 2022 Kevin Matthes.
%%      This file is licensed GPL 2 as of June 1991.
%%
%%  DATE
%%      2022
%%
%%  NOTE
%%      See `LICENSE' for full license.
%%      See `README.md' for project details.
%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%%%%
%%
%% Variables.
%%
%%%%

% Software.
archiver.args   = 'rsv';
archiver.in     = '*.o';
archiver.out    = ['lib' 'gpl2' '.a'];
archiver.self   = 'ar';
archiver.call   = [ archiver.self ' ' archiver.args ' ' archiver.out ' '     ...
                    archiver.in                                              ...
                  ];

compiler.in     = '*.c';
compiler.flags  = ' -Wall -Werror -Wextra -Wpedantic -std=c99 -c ';
compiler.self   = 'gcc';
compiler.call   = [compiler.self ' ' compiler.flags ' ' compiler.in];



% Miscellaneous.
misc.self   = 'gcc-ar.m';
misc.banner = ['[ ' misc.self ' ] '];



%%%%
%%
%% Build steps.
%%
%%%%

% Begin build instruction.
disp ([misc.banner 'Begin build instruction.']);



% Call C compiler.
disp ([misc.banner 'Compile object files ...']);

disp (compiler.call);
system (compiler.call);

disp ([misc.banner 'Done.']);



% End build instruction.
disp ([misc.banner 'End build instruction.']);

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
