%ignore wxGeometryCentre;
enum wxGeometryCentre;
#define wxCENTRE                   0x0001
#define wxCENTER                   wxCENTRE
%ignore wxOrientation;
enum wxOrientation;
#define wxHORIZONTAL               0x0004
#define wxVERTICAL                 0x0008
#define wxBOTH                     wxVERTICAL | wxHORIZONTAL
#define wxORIENTATION_MASK         wxBOTH
%ignore wxDirection;
enum wxDirection;
#define wxLEFT                     0x0010
#define wxRIGHT                    0x0020
#define wxUP                       0x0040
#define wxDOWN                     0x0080
#define wxTOP                      wxUP
#define wxBOTTOM                   wxDOWN
#define wxNORTH                    wxUP
#define wxSOUTH                    wxDOWN
#define wxWEST                     wxLEFT
#define wxEAST                     wxRIGHT
#define wxALL                      (wxUP | wxDOWN | wxRIGHT | wxLEFT)
#define wxDIRECTION_MASK            wxALL
%ignore wxAlignment;
enum wxAlignment;
#define wxALIGN_INVALID            -1
#define wxALIGN_NOT                0x0000
#define wxALIGN_CENTER_HORIZONTAL  0x0100
#define wxALIGN_CENTRE_HORIZONTAL  wxALIGN_CENTER_HORIZONTAL
#define wxALIGN_LEFT               wxALIGN_NOT
#define wxALIGN_TOP                wxALIGN_NOT
#define wxALIGN_RIGHT              0x0200
#define wxALIGN_BOTTOM             0x0400
#define wxALIGN_CENTER_VERTICAL    0x0800
#define wxALIGN_CENTRE_VERTICAL    wxALIGN_CENTER_VERTICAL
#define wxALIGN_CENTER             (wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL)
#define wxALIGN_CENTRE             wxALIGN_CENTER
#define wxALIGN_MASK               0x0f00
%ignore wxSizerFlagBits;
enum wxSizerFlagBits;
#define wxFIXED_MINSIZE                 0x8000
#define wxRESERVE_SPACE_EVEN_IF_HIDDEN  0x0002
#define wxSIZER_FLAG_BITS_MASK          0x8002
%ignore wxStretch;
enum wxStretch;
#define wxSTRETCH_NOT              0x0000
#define wxSHRINK                   0x1000
#define wxGROW                     0x2000
#define wxEXPAND                   wxGROW
#define wxSHAPED                   0x4000
#define wxTILE                     wxSHAPED | wxFIXED_MINSIZE
#define wxSTRETCH_MASK             0x7000
%ignore wxBorder;
enum wxBorder;
#define wxBORDER_DEFAULT  0
#define wxBORDER_NONE    0x00200000
#define wxBORDER_STATIC  0x01000000
#define wxBORDER_SIMPLE  0x02000000
#define wxBORDER_RAISED  0x04000000
#define wxBORDER_SUNKEN  0x08000000
#define wxBORDER_DOUBLE  0x10000000
#define wxBORDER_THEME   wxBORDER_DOUBLE
#define wxBORDER_MASK    0x1f200000
#define wxSIZE_AUTO_WIDTH       0x0001
#define wxSIZE_AUTO_HEIGHT      0x0002
#define wxSIZE_AUTO             (wxSIZE_AUTO_WIDTH|wxSIZE_AUTO_HEIGHT)
#define wxSIZE_USE_EXISTING     0x0000
#define wxSIZE_ALLOW_MINUS_ONE  0x0004
#define wxSIZE_NO_ADJUSTMENTS   0x0008
#define wxSIZE_FORCE            0x0010
#define wxSIZE_FORCE_EVENT      0x0020
#define wxVSCROLL               0x80000000
#define wxHSCROLL               0x40000000
#define wxCAPTION               0x20000000
#define wxDOUBLE_BORDER         wxBORDER_DOUBLE
#define wxSUNKEN_BORDER         wxBORDER_SUNKEN
#define wxRAISED_BORDER         wxBORDER_RAISED
#define wxBORDER                wxBORDER_SIMPLE
#define wxSIMPLE_BORDER         wxBORDER_SIMPLE
#define wxSTATIC_BORDER         wxBORDER_STATIC
#define wxNO_BORDER             wxBORDER_NONE
#define wxALWAYS_SHOW_SB        0x00800000
#define wxCLIP_CHILDREN         0x00400000
#define wxCLIP_SIBLINGS         0x20000000
#define wxTRANSPARENT_WINDOW    0x00100000
#define wxTAB_TRAVERSAL         0x00080000
#define wxWANTS_CHARS           0x00040000
#ifdef __WXMOTIF__
#define wxRETAINED              0x00020000
#else
#define wxRETAINED              0x00000000
#endif
#define wxBACKINGSTORE          wxRETAINED
#define wxPOPUP_WINDOW          0x00020000
#define wxFULL_REPAINT_ON_RESIZE 0x00010000
#define wxNO_FULL_REPAINT_ON_RESIZE 0
#define wxWINDOW_STYLE_MASK     \
    (wxVSCROLL|wxHSCROLL|wxBORDER_MASK|wxALWAYS_SHOW_SB|wxCLIP_CHILDREN| \
     wxCLIP_SIBLINGS|wxTRANSPARENT_WINDOW|wxTAB_TRAVERSAL|wxWANTS_CHARS| \
     wxRETAINED|wxPOPUP_WINDOW|wxFULL_REPAINT_ON_RESIZE)
#define wxWS_EX_BLOCK_EVENTS            0x00000002
#define wxWS_EX_TRANSIENT               0x00000004
#define wxWS_EX_THEMED_BACKGROUND       0x00000008
#define wxWS_EX_PROCESS_IDLE            0x00000010
#define wxWS_EX_PROCESS_UI_UPDATES      0x00000020
#define wxFRAME_EX_METAL                0x00000040
#define wxDIALOG_EX_METAL               0x00000040
#define wxWS_EX_CONTEXTHELP             0x00000080
#define wxFRAME_EX_CONTEXTHELP          wxWS_EX_CONTEXTHELP
#define wxDIALOG_EX_CONTEXTHELP         wxWS_EX_CONTEXTHELP
#define wxFRAME_DRAWER          0x0020
#define wxFRAME_NO_WINDOW_MENU  0x0100
#define wxMB_DOCKABLE       0x0001
#define wxMENU_TEAROFF      0x0001
#define wxCOLOURED          0x0800
#define wxFIXED_LENGTH      0x0400
#define wxLB_SORT           0x0010
#define wxLB_SINGLE         0x0020
#define wxLB_MULTIPLE       0x0040
#define wxLB_EXTENDED       0x0080
#define wxLB_NEEDED_SB      0x0000
#define wxLB_OWNERDRAW      0x0100
#define wxLB_ALWAYS_SB      0x0200
#define wxLB_NO_SB          0x0400
#define wxLB_HSCROLL        wxHSCROLL
#define wxLB_INT_HEIGHT     0x0800
#define wxCB_SIMPLE         0x0004
#define wxCB_SORT           0x0008
#define wxCB_READONLY       0x0010
#define wxCB_DROPDOWN       0x0020
#define wxRA_LEFTTORIGHT    0x0001
#define wxRA_TOPTOBOTTOM    0x0002
#define wxRA_SPECIFY_COLS   wxHORIZONTAL
#define wxRA_SPECIFY_ROWS   wxVERTICAL
#define wxRA_HORIZONTAL     wxHORIZONTAL
#define wxRA_VERTICAL       wxVERTICAL
#define wxRB_GROUP          0x0004
#define wxRB_SINGLE         0x0008
#define wxSB_HORIZONTAL      wxHORIZONTAL
#define wxSB_VERTICAL        wxVERTICAL
#define wxSP_HORIZONTAL       wxHORIZONTAL 
#define wxSP_VERTICAL         wxVERTICAL   
#define wxSP_ARROW_KEYS       0x4000
#define wxSP_WRAP             0x8000
#define wxTC_RIGHTJUSTIFY     0x0010
#define wxTC_FIXEDWIDTH       0x0020
#define wxTC_TOP              0x0000    
#define wxTC_LEFT             0x0020
#define wxTC_RIGHT            0x0040
#define wxTC_BOTTOM           0x0080
#define wxTC_MULTILINE        0x0200    
#define wxTC_OWNERDRAW        0x0400
#define wxBI_EXPAND           wxEXPAND
#define wxLI_HORIZONTAL         wxHORIZONTAL
#define wxLI_VERTICAL           wxVERTICAL
#define wxYES                   0x00000002
#define wxOK                    0x00000004
#define wxNO                    0x00000008
#define wxYES_NO                (wxYES | wxNO)
#define wxCANCEL                0x00000010
#define wxAPPLY                 0x00000020
#define wxCLOSE                 0x00000040
#define wxOK_DEFAULT            0x00000000  
#define wxYES_DEFAULT           0x00000000  
#define wxNO_DEFAULT            0x00000080  
#define wxCANCEL_DEFAULT        0x80000000  
#define wxICON_EXCLAMATION      0x00000100
#define wxICON_HAND             0x00000200
#define wxICON_WARNING          wxICON_EXCLAMATION
#define wxICON_ERROR            wxICON_HAND
#define wxICON_QUESTION         0x00000400
#define wxICON_INFORMATION      0x00000800
#define wxICON_STOP             wxICON_HAND
#define wxICON_ASTERISK         wxICON_INFORMATION
#define wxHELP                  0x00001000
#define wxFORWARD               0x00002000
#define wxBACKWARD              0x00004000
#define wxRESET                 0x00008000
#define wxMORE                  0x00010000
#define wxSETUP                 0x00020000
#define wxICON_NONE             0x00040000
#define wxICON_AUTH_NEEDED      0x00080000
#define wxICON_MASK \
    (wxICON_EXCLAMATION|wxICON_HAND|wxICON_QUESTION|wxICON_INFORMATION|wxICON_NONE)
#define wxNOT_FOUND       (-1)
%ignore wxBackgroundStyle;
enum wxBackgroundStyle;
#define wxBG_STYLE_ERASE 0
#define wxBG_STYLE_SYSTEM wxBG_STYLE_ERASE + 1
#define wxBG_STYLE_PAINT wxBG_STYLE_SYSTEM + 1
#define wxBG_STYLE_COLOUR wxBG_STYLE_PAINT + 1
#define wxBG_STYLE_TRANSPARENT wxBG_STYLE_COLOUR + 1
%ignore wxStandardID;
enum wxStandardID;
#define wxID_AUTO_LOWEST 0
#define wxID_AUTO_HIGHEST wxID_AUTO_LOWEST + 1
#define wxID_NONE  -3
#define wxID_SEPARATOR  -2
#define wxID_ANY  -1
#define wxID_LOWEST  4999
#define wxID_OPEN wxID_LOWEST  + 1
#define wxID_CLOSE wxID_OPEN + 1
#define wxID_NEW wxID_CLOSE + 1
#define wxID_SAVE wxID_NEW + 1
#define wxID_SAVEAS wxID_SAVE + 1
#define wxID_REVERT wxID_SAVEAS + 1
#define wxID_EXIT wxID_REVERT + 1
#define wxID_UNDO wxID_EXIT + 1
#define wxID_REDO wxID_UNDO + 1
#define wxID_HELP wxID_REDO + 1
#define wxID_PRINT wxID_HELP + 1
#define wxID_PRINT_SETUP wxID_PRINT + 1
#define wxID_PAGE_SETUP wxID_PRINT_SETUP + 1
#define wxID_PREVIEW wxID_PAGE_SETUP + 1
#define wxID_ABOUT wxID_PREVIEW + 1
#define wxID_HELP_CONTENTS wxID_ABOUT + 1
#define wxID_HELP_INDEX wxID_HELP_CONTENTS + 1
#define wxID_HELP_SEARCH wxID_HELP_INDEX + 1
#define wxID_HELP_COMMANDS wxID_HELP_SEARCH + 1
#define wxID_HELP_PROCEDURES wxID_HELP_COMMANDS + 1
#define wxID_HELP_CONTEXT wxID_HELP_PROCEDURES + 1
#define wxID_CLOSE_ALL wxID_HELP_CONTEXT + 1
#define wxID_PREFERENCES wxID_CLOSE_ALL + 1
#define wxID_EDIT  5030
#define wxID_CUT wxID_EDIT  + 1
#define wxID_COPY wxID_CUT + 1
#define wxID_PASTE wxID_COPY + 1
#define wxID_CLEAR wxID_PASTE + 1
#define wxID_FIND wxID_CLEAR + 1
#define wxID_DUPLICATE wxID_FIND + 1
#define wxID_SELECTALL wxID_DUPLICATE + 1
#define wxID_DELETE wxID_SELECTALL + 1
#define wxID_REPLACE wxID_DELETE + 1
#define wxID_REPLACE_ALL wxID_REPLACE + 1
#define wxID_PROPERTIES wxID_REPLACE_ALL + 1
#define wxID_VIEW_DETAILS wxID_PROPERTIES + 1
#define wxID_VIEW_LARGEICONS wxID_VIEW_DETAILS + 1
#define wxID_VIEW_SMALLICONS wxID_VIEW_LARGEICONS + 1
#define wxID_VIEW_LIST wxID_VIEW_SMALLICONS + 1
#define wxID_VIEW_SORTDATE wxID_VIEW_LIST + 1
#define wxID_VIEW_SORTNAME wxID_VIEW_SORTDATE + 1
#define wxID_VIEW_SORTSIZE wxID_VIEW_SORTNAME + 1
#define wxID_VIEW_SORTTYPE wxID_VIEW_SORTSIZE + 1
#define wxID_FILE  5050
#define wxID_FILE1 wxID_FILE  + 1
#define wxID_FILE2 wxID_FILE1 + 1
#define wxID_FILE3 wxID_FILE2 + 1
#define wxID_FILE4 wxID_FILE3 + 1
#define wxID_FILE5 wxID_FILE4 + 1
#define wxID_FILE6 wxID_FILE5 + 1
#define wxID_FILE7 wxID_FILE6 + 1
#define wxID_FILE8 wxID_FILE7 + 1
#define wxID_FILE9 wxID_FILE8 + 1
#define wxID_OK  5100
#define wxID_CANCEL wxID_OK  + 1
#define wxID_APPLY wxID_CANCEL + 1
#define wxID_YES wxID_APPLY + 1
#define wxID_NO wxID_YES + 1
#define wxID_STATIC wxID_NO + 1
#define wxID_FORWARD wxID_STATIC + 1
#define wxID_BACKWARD wxID_FORWARD + 1
#define wxID_DEFAULT wxID_BACKWARD + 1
#define wxID_MORE wxID_DEFAULT + 1
#define wxID_SETUP wxID_MORE + 1
#define wxID_RESET wxID_SETUP + 1
#define wxID_CONTEXT_HELP wxID_RESET + 1
#define wxID_YESTOALL wxID_CONTEXT_HELP + 1
#define wxID_NOTOALL wxID_YESTOALL + 1
#define wxID_ABORT wxID_NOTOALL + 1
#define wxID_RETRY wxID_ABORT + 1
#define wxID_IGNORE wxID_RETRY + 1
#define wxID_ADD wxID_IGNORE + 1
#define wxID_REMOVE wxID_ADD + 1
#define wxID_UP wxID_REMOVE + 1
#define wxID_DOWN wxID_UP + 1
#define wxID_HOME wxID_DOWN + 1
#define wxID_REFRESH wxID_HOME + 1
#define wxID_STOP wxID_REFRESH + 1
#define wxID_INDEX wxID_STOP + 1
#define wxID_BOLD wxID_INDEX + 1
#define wxID_ITALIC wxID_BOLD + 1
#define wxID_JUSTIFY_CENTER wxID_ITALIC + 1
#define wxID_JUSTIFY_FILL wxID_JUSTIFY_CENTER + 1
#define wxID_JUSTIFY_RIGHT wxID_JUSTIFY_FILL + 1
#define wxID_JUSTIFY_LEFT wxID_JUSTIFY_RIGHT + 1
#define wxID_UNDERLINE wxID_JUSTIFY_LEFT + 1
#define wxID_INDENT wxID_UNDERLINE + 1
#define wxID_UNINDENT wxID_INDENT + 1
#define wxID_ZOOM_100 wxID_UNINDENT + 1
#define wxID_ZOOM_FIT wxID_ZOOM_100 + 1
#define wxID_ZOOM_IN wxID_ZOOM_FIT + 1
#define wxID_ZOOM_OUT wxID_ZOOM_IN + 1
#define wxID_UNDELETE wxID_ZOOM_OUT + 1
#define wxID_REVERT_TO_SAVED wxID_UNDELETE + 1
#define wxID_CDROM wxID_REVERT_TO_SAVED + 1
#define wxID_CONVERT wxID_CDROM + 1
#define wxID_EXECUTE wxID_CONVERT + 1
#define wxID_FLOPPY wxID_EXECUTE + 1
#define wxID_HARDDISK wxID_FLOPPY + 1
#define wxID_BOTTOM wxID_HARDDISK + 1
#define wxID_FIRST wxID_BOTTOM + 1
#define wxID_LAST wxID_FIRST + 1
#define wxID_TOP wxID_LAST + 1
#define wxID_INFO wxID_TOP + 1
#define wxID_JUMP_TO wxID_INFO + 1
#define wxID_NETWORK wxID_JUMP_TO + 1
#define wxID_SELECT_COLOR wxID_NETWORK + 1
#define wxID_SELECT_FONT wxID_SELECT_COLOR + 1
#define wxID_SORT_ASCENDING wxID_SELECT_FONT + 1
#define wxID_SORT_DESCENDING wxID_SORT_ASCENDING + 1
#define wxID_SPELL_CHECK wxID_SORT_DESCENDING + 1
#define wxID_STRIKETHROUGH wxID_SPELL_CHECK + 1
#define wxID_SYSTEM_MENU  5200
#define wxID_CLOSE_FRAME wxID_SYSTEM_MENU  + 1
#define wxID_MOVE_FRAME wxID_CLOSE_FRAME + 1
#define wxID_RESIZE_FRAME wxID_MOVE_FRAME + 1
#define wxID_MAXIMIZE_FRAME wxID_RESIZE_FRAME + 1
#define wxID_ICONIZE_FRAME wxID_MAXIMIZE_FRAME + 1
#define wxID_RESTORE_FRAME wxID_ICONIZE_FRAME + 1
#define wxID_MDI_WINDOW_FIRST  5230
#define wxID_MDI_WINDOW_CASCADE  wxID_MDI_WINDOW_FIRST
#define wxID_MDI_WINDOW_TILE_HORZ wxID_MDI_WINDOW_CASCADE  + 1
#define wxID_MDI_WINDOW_TILE_VERT wxID_MDI_WINDOW_TILE_HORZ + 1
#define wxID_MDI_WINDOW_ARRANGE_ICONS wxID_MDI_WINDOW_TILE_VERT + 1
#define wxID_MDI_WINDOW_PREV wxID_MDI_WINDOW_ARRANGE_ICONS + 1
#define wxID_MDI_WINDOW_NEXT wxID_MDI_WINDOW_PREV + 1
#define wxID_MDI_WINDOW_LAST  wxID_MDI_WINDOW_NEXT
#define wxID_FILEDLGG  5900
#define wxID_FILECTRL  5950
#define wxID_HIGHEST  5999
%ignore wxItemKind;
enum wxItemKind;
#define wxITEM_SEPARATOR  -1
#define wxITEM_NORMAL wxITEM_SEPARATOR  + 1
#define wxITEM_CHECK wxITEM_NORMAL + 1
#define wxITEM_RADIO wxITEM_CHECK + 1
#define wxITEM_DROPDOWN wxITEM_RADIO + 1
#define wxITEM_MAX wxITEM_DROPDOWN + 1
%ignore wxHitTest;
enum wxHitTest;
#define wxHT_NOWHERE 0
#define wxHT_SCROLLBAR_FIRST  wxHT_NOWHERE
#define wxHT_SCROLLBAR_ARROW_LINE_1 wxHT_SCROLLBAR_FIRST  + 1
#define wxHT_SCROLLBAR_ARROW_LINE_2 wxHT_SCROLLBAR_ARROW_LINE_1 + 1
#define wxHT_SCROLLBAR_ARROW_PAGE_1 wxHT_SCROLLBAR_ARROW_LINE_2 + 1
#define wxHT_SCROLLBAR_ARROW_PAGE_2 wxHT_SCROLLBAR_ARROW_PAGE_1 + 1
#define wxHT_SCROLLBAR_THUMB wxHT_SCROLLBAR_ARROW_PAGE_2 + 1
#define wxHT_SCROLLBAR_BAR_1 wxHT_SCROLLBAR_THUMB + 1
#define wxHT_SCROLLBAR_BAR_2 wxHT_SCROLLBAR_BAR_1 + 1
#define wxHT_SCROLLBAR_LAST wxHT_SCROLLBAR_BAR_2 + 1
#define wxHT_WINDOW_OUTSIDE wxHT_SCROLLBAR_LAST + 1
#define wxHT_WINDOW_INSIDE wxHT_WINDOW_OUTSIDE + 1
#define wxHT_WINDOW_VERT_SCROLLBAR wxHT_WINDOW_INSIDE + 1
#define wxHT_WINDOW_HORZ_SCROLLBAR wxHT_WINDOW_VERT_SCROLLBAR + 1
#define wxHT_WINDOW_CORNER wxHT_WINDOW_HORZ_SCROLLBAR + 1
#define wxHT_MAX wxHT_WINDOW_CORNER + 1
%ignore wxDataFormatId;
enum wxDataFormatId;
#define wxDF_INVALID  0
#define wxDF_TEXT  1
#define wxDF_BITMAP  2
#define wxDF_METAFILE  3
#define wxDF_SYLK  4
#define wxDF_DIF  5
#define wxDF_TIFF  6
#define wxDF_OEMTEXT  7
#define wxDF_DIB  8
#define wxDF_PALETTE  9
#define wxDF_PENDATA  10
#define wxDF_RIFF  11
#define wxDF_WAVE  12
#define wxDF_UNICODETEXT  13
#define wxDF_ENHMETAFILE  14
#define wxDF_FILENAME  15
#define wxDF_LOCALE  16
#define wxDF_PRIVATE  20
#define wxDF_HTML  30
#define wxDF_MAX wxDF_HTML  + 1
%ignore wxKeyCode;
enum wxKeyCode;
#define WXK_NONE     0
#define WXK_CONTROL_A  1
#define WXK_CONTROL_B WXK_CONTROL_A  + 1
#define WXK_CONTROL_C WXK_CONTROL_B + 1
#define WXK_CONTROL_D WXK_CONTROL_C + 1
#define WXK_CONTROL_E WXK_CONTROL_D + 1
#define WXK_CONTROL_F WXK_CONTROL_E + 1
#define WXK_CONTROL_G WXK_CONTROL_F + 1
#define WXK_CONTROL_H WXK_CONTROL_G + 1
#define WXK_CONTROL_I WXK_CONTROL_H + 1
#define WXK_CONTROL_J WXK_CONTROL_I + 1
#define WXK_CONTROL_K WXK_CONTROL_J + 1
#define WXK_CONTROL_L WXK_CONTROL_K + 1
#define WXK_CONTROL_M WXK_CONTROL_L + 1
#define WXK_CONTROL_N WXK_CONTROL_M + 1
#define WXK_CONTROL_O WXK_CONTROL_N + 1
#define WXK_CONTROL_P WXK_CONTROL_O + 1
#define WXK_CONTROL_Q WXK_CONTROL_P + 1
#define WXK_CONTROL_R WXK_CONTROL_Q + 1
#define WXK_CONTROL_S WXK_CONTROL_R + 1
#define WXK_CONTROL_T WXK_CONTROL_S + 1
#define WXK_CONTROL_U WXK_CONTROL_T + 1
#define WXK_CONTROL_V WXK_CONTROL_U + 1
#define WXK_CONTROL_W WXK_CONTROL_V + 1
#define WXK_CONTROL_X WXK_CONTROL_W + 1
#define WXK_CONTROL_Y WXK_CONTROL_X + 1
#define WXK_CONTROL_Z WXK_CONTROL_Y + 1
#define WXK_BACK     8
#define WXK_TAB      9
#define WXK_RETURN   13
#define WXK_ESCAPE   27
#define WXK_SPACE    32
#define WXK_DELETE   127
#define WXK_START    300
#define WXK_LBUTTON WXK_START    + 1
#define WXK_RBUTTON WXK_LBUTTON + 1
#define WXK_CANCEL WXK_RBUTTON + 1
#define WXK_MBUTTON WXK_CANCEL + 1
#define WXK_CLEAR WXK_MBUTTON + 1
#define WXK_SHIFT WXK_CLEAR + 1
#define WXK_ALT WXK_SHIFT + 1
#define WXK_CONTROL WXK_ALT + 1
#define WXK_RAW_CONTROL WXK_CONTROL + 1
#define WXK_MENU WXK_RAW_CONTROL + 1
#define WXK_PAUSE WXK_MENU + 1
#define WXK_CAPITAL WXK_PAUSE + 1
#define WXK_END WXK_CAPITAL + 1
#define WXK_HOME WXK_END + 1
#define WXK_LEFT WXK_HOME + 1
#define WXK_UP WXK_LEFT + 1
#define WXK_RIGHT WXK_UP + 1
#define WXK_DOWN WXK_RIGHT + 1
#define WXK_SELECT WXK_DOWN + 1
#define WXK_PRINT WXK_SELECT + 1
#define WXK_EXECUTE WXK_PRINT + 1
#define WXK_SNAPSHOT WXK_EXECUTE + 1
#define WXK_INSERT WXK_SNAPSHOT + 1
#define WXK_HELP WXK_INSERT + 1
#define WXK_NUMPAD0 WXK_HELP + 1
#define WXK_NUMPAD1 WXK_NUMPAD0 + 1
#define WXK_NUMPAD2 WXK_NUMPAD1 + 1
#define WXK_NUMPAD3 WXK_NUMPAD2 + 1
#define WXK_NUMPAD4 WXK_NUMPAD3 + 1
#define WXK_NUMPAD5 WXK_NUMPAD4 + 1
#define WXK_NUMPAD6 WXK_NUMPAD5 + 1
#define WXK_NUMPAD7 WXK_NUMPAD6 + 1
#define WXK_NUMPAD8 WXK_NUMPAD7 + 1
#define WXK_NUMPAD9 WXK_NUMPAD8 + 1
#define WXK_MULTIPLY WXK_NUMPAD9 + 1
#define WXK_ADD WXK_MULTIPLY + 1
#define WXK_SEPARATOR WXK_ADD + 1
#define WXK_SUBTRACT WXK_SEPARATOR + 1
#define WXK_DECIMAL WXK_SUBTRACT + 1
#define WXK_DIVIDE WXK_DECIMAL + 1
#define WXK_F1 WXK_DIVIDE + 1
#define WXK_F2 WXK_F1 + 1
#define WXK_F3 WXK_F2 + 1
#define WXK_F4 WXK_F3 + 1
#define WXK_F5 WXK_F4 + 1
#define WXK_F6 WXK_F5 + 1
#define WXK_F7 WXK_F6 + 1
#define WXK_F8 WXK_F7 + 1
#define WXK_F9 WXK_F8 + 1
#define WXK_F10 WXK_F9 + 1
#define WXK_F11 WXK_F10 + 1
#define WXK_F12 WXK_F11 + 1
#define WXK_F13 WXK_F12 + 1
#define WXK_F14 WXK_F13 + 1
#define WXK_F15 WXK_F14 + 1
#define WXK_F16 WXK_F15 + 1
#define WXK_F17 WXK_F16 + 1
#define WXK_F18 WXK_F17 + 1
#define WXK_F19 WXK_F18 + 1
#define WXK_F20 WXK_F19 + 1
#define WXK_F21 WXK_F20 + 1
#define WXK_F22 WXK_F21 + 1
#define WXK_F23 WXK_F22 + 1
#define WXK_F24 WXK_F23 + 1
#define WXK_NUMLOCK WXK_F24 + 1
#define WXK_SCROLL WXK_NUMLOCK + 1
#define WXK_PAGEUP WXK_SCROLL + 1
#define WXK_PAGEDOWN WXK_PAGEUP + 1
#define WXK_NUMPAD_SPACE WXK_PAGEDOWN + 1
#define WXK_NUMPAD_TAB WXK_NUMPAD_SPACE + 1
#define WXK_NUMPAD_ENTER WXK_NUMPAD_TAB + 1
#define WXK_NUMPAD_F1 WXK_NUMPAD_ENTER + 1
#define WXK_NUMPAD_F2 WXK_NUMPAD_F1 + 1
#define WXK_NUMPAD_F3 WXK_NUMPAD_F2 + 1
#define WXK_NUMPAD_F4 WXK_NUMPAD_F3 + 1
#define WXK_NUMPAD_HOME WXK_NUMPAD_F4 + 1
#define WXK_NUMPAD_LEFT WXK_NUMPAD_HOME + 1
#define WXK_NUMPAD_UP WXK_NUMPAD_LEFT + 1
#define WXK_NUMPAD_RIGHT WXK_NUMPAD_UP + 1
#define WXK_NUMPAD_DOWN WXK_NUMPAD_RIGHT + 1
#define WXK_NUMPAD_PAGEUP WXK_NUMPAD_DOWN + 1
#define WXK_NUMPAD_PAGEDOWN WXK_NUMPAD_PAGEUP + 1
#define WXK_NUMPAD_END WXK_NUMPAD_PAGEDOWN + 1
#define WXK_NUMPAD_BEGIN WXK_NUMPAD_END + 1
#define WXK_NUMPAD_INSERT WXK_NUMPAD_BEGIN + 1
#define WXK_NUMPAD_DELETE WXK_NUMPAD_INSERT + 1
#define WXK_NUMPAD_EQUAL WXK_NUMPAD_DELETE + 1
#define WXK_NUMPAD_MULTIPLY WXK_NUMPAD_EQUAL + 1
#define WXK_NUMPAD_ADD WXK_NUMPAD_MULTIPLY + 1
#define WXK_NUMPAD_SEPARATOR WXK_NUMPAD_ADD + 1
#define WXK_NUMPAD_SUBTRACT WXK_NUMPAD_SEPARATOR + 1
#define WXK_NUMPAD_DECIMAL WXK_NUMPAD_SUBTRACT + 1
#define WXK_NUMPAD_DIVIDE WXK_NUMPAD_DECIMAL + 1
#define WXK_WINDOWS_LEFT WXK_NUMPAD_DIVIDE + 1
#define WXK_WINDOWS_RIGHT WXK_WINDOWS_LEFT + 1
#define WXK_WINDOWS_MENU WXK_WINDOWS_RIGHT + 1
#define WXK_COMMAND WXK_WINDOWS_MENU + 1
#define WXK_SPECIAL1  193
#define WXK_SPECIAL2 WXK_SPECIAL1  + 1
#define WXK_SPECIAL3 WXK_SPECIAL2 + 1
#define WXK_SPECIAL4 WXK_SPECIAL3 + 1
#define WXK_SPECIAL5 WXK_SPECIAL4 + 1
#define WXK_SPECIAL6 WXK_SPECIAL5 + 1
#define WXK_SPECIAL7 WXK_SPECIAL6 + 1
#define WXK_SPECIAL8 WXK_SPECIAL7 + 1
#define WXK_SPECIAL9 WXK_SPECIAL8 + 1
#define WXK_SPECIAL10 WXK_SPECIAL9 + 1
#define WXK_SPECIAL11 WXK_SPECIAL10 + 1
#define WXK_SPECIAL12 WXK_SPECIAL11 + 1
#define WXK_SPECIAL13 WXK_SPECIAL12 + 1
#define WXK_SPECIAL14 WXK_SPECIAL13 + 1
#define WXK_SPECIAL15 WXK_SPECIAL14 + 1
#define WXK_SPECIAL16 WXK_SPECIAL15 + 1
#define WXK_SPECIAL17 WXK_SPECIAL16 + 1
#define WXK_SPECIAL18 WXK_SPECIAL17 + 1
#define WXK_SPECIAL19 WXK_SPECIAL18 + 1
#define WXK_SPECIAL20 WXK_SPECIAL19 + 1
#define WXK_BROWSER_BACK  501
#define WXK_BROWSER_FORWARD WXK_BROWSER_BACK  + 1
#define WXK_BROWSER_REFRESH WXK_BROWSER_FORWARD + 1
#define WXK_BROWSER_STOP WXK_BROWSER_REFRESH + 1
#define WXK_BROWSER_SEARCH WXK_BROWSER_STOP + 1
#define WXK_BROWSER_FAVORITES WXK_BROWSER_SEARCH + 1
#define WXK_BROWSER_HOME WXK_BROWSER_FAVORITES + 1
#define WXK_VOLUME_MUTE WXK_BROWSER_HOME + 1
#define WXK_VOLUME_DOWN WXK_VOLUME_MUTE + 1
#define WXK_VOLUME_UP WXK_VOLUME_DOWN + 1
#define WXK_MEDIA_NEXT_TRACK WXK_VOLUME_UP + 1
#define WXK_MEDIA_PREV_TRACK WXK_MEDIA_NEXT_TRACK + 1
#define WXK_MEDIA_STOP WXK_MEDIA_PREV_TRACK + 1
#define WXK_MEDIA_PLAY_PAUSE WXK_MEDIA_STOP + 1
#define WXK_LAUNCH_MAIL WXK_MEDIA_PLAY_PAUSE + 1
#define WXK_LAUNCH_APP1 WXK_LAUNCH_MAIL + 1
#define WXK_LAUNCH_APP2 WXK_LAUNCH_APP1 + 1
%ignore wxKeyModifier;
enum wxKeyModifier;
#define wxMOD_NONE       0x0000
#define wxMOD_ALT        0x0001
#define wxMOD_CONTROL    0x0002
#define wxMOD_ALTGR      wxMOD_ALT | wxMOD_CONTROL
#define wxMOD_SHIFT      0x0004
#define wxMOD_META       0x0008
#define wxMOD_WIN        wxMOD_META
#define wxMOD_RAW_CONTROL wxMOD_WIN        + 1
#define wxMOD_CMD        wxMOD_CONTROL
#define wxMOD_ALL        0xffff
%ignore wxPaperSize;
enum wxPaperSize;
#define wxPAPER_10X11 0
#define wxPAPER_10X14 wxPAPER_10X11 + 1
#define wxPAPER_11X17 wxPAPER_10X14 + 1
#define wxPAPER_12X11 wxPAPER_11X17 + 1
#define wxPAPER_15X11 wxPAPER_12X11 + 1
#define wxPAPER_9X11 wxPAPER_15X11 + 1
#define wxPAPER_A2 wxPAPER_9X11 + 1
#define wxPAPER_A3 wxPAPER_A2 + 1
#define wxPAPER_A3_EXTRA wxPAPER_A3 + 1
#define wxPAPER_A3_EXTRA_TRANSVERSE wxPAPER_A3_EXTRA + 1
#define wxPAPER_A3_ROTATED wxPAPER_A3_EXTRA_TRANSVERSE + 1
#define wxPAPER_A3_TRANSVERSE wxPAPER_A3_ROTATED + 1
#define wxPAPER_A4 wxPAPER_A3_TRANSVERSE + 1
#define wxPAPER_A4SMALL wxPAPER_A4 + 1
#define wxPAPER_A4_EXTRA wxPAPER_A4SMALL + 1
#define wxPAPER_A4_PLUS wxPAPER_A4_EXTRA + 1
#define wxPAPER_A4_ROTATED wxPAPER_A4_PLUS + 1
#define wxPAPER_A4_TRANSVERSE wxPAPER_A4_ROTATED + 1
#define wxPAPER_A5 wxPAPER_A4_TRANSVERSE + 1
#define wxPAPER_A5_EXTRA wxPAPER_A5 + 1
#define wxPAPER_A5_ROTATED wxPAPER_A5_EXTRA + 1
#define wxPAPER_A5_TRANSVERSE wxPAPER_A5_ROTATED + 1
#define wxPAPER_A6 wxPAPER_A5_TRANSVERSE + 1
#define wxPAPER_A6_ROTATED wxPAPER_A6 + 1
#define wxPAPER_A_PLUS wxPAPER_A6_ROTATED + 1
#define wxPAPER_B4 wxPAPER_A_PLUS + 1
#define wxPAPER_B4_JIS_ROTATED wxPAPER_B4 + 1
#define wxPAPER_B5 wxPAPER_B4_JIS_ROTATED + 1
#define wxPAPER_B5_EXTRA wxPAPER_B5 + 1
#define wxPAPER_B5_JIS_ROTATED wxPAPER_B5_EXTRA + 1
#define wxPAPER_B5_TRANSVERSE wxPAPER_B5_JIS_ROTATED + 1
#define wxPAPER_B6_JIS wxPAPER_B5_TRANSVERSE + 1
#define wxPAPER_B6_JIS_ROTATED wxPAPER_B6_JIS + 1
#define wxPAPER_B_PLUS wxPAPER_B6_JIS_ROTATED + 1
#define wxPAPER_CSHEET wxPAPER_B_PLUS + 1
#define wxPAPER_DBL_JAPANESE_POSTCARD wxPAPER_CSHEET + 1
#define wxPAPER_DBL_JAPANESE_POSTCARD_ROTATED wxPAPER_DBL_JAPANESE_POSTCARD + 1
#define wxPAPER_DSHEET wxPAPER_DBL_JAPANESE_POSTCARD_ROTATED + 1
#define wxPAPER_ENV_10 wxPAPER_DSHEET + 1
#define wxPAPER_ENV_11 wxPAPER_ENV_10 + 1
#define wxPAPER_ENV_12 wxPAPER_ENV_11 + 1
#define wxPAPER_ENV_14 wxPAPER_ENV_12 + 1
#define wxPAPER_ENV_9 wxPAPER_ENV_14 + 1
#define wxPAPER_ENV_B4 wxPAPER_ENV_9 + 1
#define wxPAPER_ENV_B5 wxPAPER_ENV_B4 + 1
#define wxPAPER_ENV_B6 wxPAPER_ENV_B5 + 1
#define wxPAPER_ENV_C3 wxPAPER_ENV_B6 + 1
#define wxPAPER_ENV_C4 wxPAPER_ENV_C3 + 1
#define wxPAPER_ENV_C5 wxPAPER_ENV_C4 + 1
#define wxPAPER_ENV_C6 wxPAPER_ENV_C5 + 1
#define wxPAPER_ENV_C65 wxPAPER_ENV_C6 + 1
#define wxPAPER_ENV_DL wxPAPER_ENV_C65 + 1
#define wxPAPER_ENV_INVITE wxPAPER_ENV_DL + 1
#define wxPAPER_ENV_ITALY wxPAPER_ENV_INVITE + 1
#define wxPAPER_ENV_MONARCH wxPAPER_ENV_ITALY + 1
#define wxPAPER_ENV_PERSONAL wxPAPER_ENV_MONARCH + 1
#define wxPAPER_ESHEET wxPAPER_ENV_PERSONAL + 1
#define wxPAPER_EXECUTIVE wxPAPER_ESHEET + 1
#define wxPAPER_FANFOLD_LGL_GERMAN wxPAPER_EXECUTIVE + 1
#define wxPAPER_FANFOLD_STD_GERMAN wxPAPER_FANFOLD_LGL_GERMAN + 1
#define wxPAPER_FANFOLD_US wxPAPER_FANFOLD_STD_GERMAN + 1
#define wxPAPER_FOLIO wxPAPER_FANFOLD_US + 1
#define wxPAPER_ISO_B4 wxPAPER_FOLIO + 1
#define wxPAPER_JAPANESE_POSTCARD wxPAPER_ISO_B4 + 1
#define wxPAPER_JAPANESE_POSTCARD_ROTATED wxPAPER_JAPANESE_POSTCARD + 1
#define wxPAPER_JENV_CHOU3 wxPAPER_JAPANESE_POSTCARD_ROTATED + 1
#define wxPAPER_JENV_CHOU3_ROTATED wxPAPER_JENV_CHOU3 + 1
#define wxPAPER_JENV_CHOU4 wxPAPER_JENV_CHOU3_ROTATED + 1
#define wxPAPER_JENV_CHOU4_ROTATED wxPAPER_JENV_CHOU4 + 1
#define wxPAPER_JENV_KAKU2 wxPAPER_JENV_CHOU4_ROTATED + 1
#define wxPAPER_JENV_KAKU2_ROTATED wxPAPER_JENV_KAKU2 + 1
#define wxPAPER_JENV_KAKU3 wxPAPER_JENV_KAKU2_ROTATED + 1
#define wxPAPER_JENV_KAKU3_ROTATED wxPAPER_JENV_KAKU3 + 1
#define wxPAPER_JENV_YOU4 wxPAPER_JENV_KAKU3_ROTATED + 1
#define wxPAPER_JENV_YOU4_ROTATED wxPAPER_JENV_YOU4 + 1
#define wxPAPER_LEDGER wxPAPER_JENV_YOU4_ROTATED + 1
#define wxPAPER_LEGAL wxPAPER_LEDGER + 1
#define wxPAPER_LEGAL_EXTRA wxPAPER_LEGAL + 1
#define wxPAPER_LETTER wxPAPER_LEGAL_EXTRA + 1
#define wxPAPER_LETTERSMALL wxPAPER_LETTER + 1
#define wxPAPER_LETTER_EXTRA wxPAPER_LETTERSMALL + 1
#define wxPAPER_LETTER_EXTRA_TRANSVERSE wxPAPER_LETTER_EXTRA + 1
#define wxPAPER_LETTER_PLUS wxPAPER_LETTER_EXTRA_TRANSVERSE + 1
#define wxPAPER_LETTER_ROTATED wxPAPER_LETTER_PLUS + 1
#define wxPAPER_LETTER_TRANSVERSE wxPAPER_LETTER_ROTATED + 1
#define wxPAPER_NONE wxPAPER_LETTER_TRANSVERSE + 1
#define wxPAPER_NOTE wxPAPER_NONE + 1
#define wxPAPER_P16K wxPAPER_NOTE + 1
#define wxPAPER_P16K_ROTATED wxPAPER_P16K + 1
#define wxPAPER_P32K wxPAPER_P16K_ROTATED + 1
#define wxPAPER_P32KBIG wxPAPER_P32K + 1
#define wxPAPER_P32KBIG_ROTATED wxPAPER_P32KBIG + 1
#define wxPAPER_P32K_ROTATED wxPAPER_P32KBIG_ROTATED + 1
#define wxPAPER_PENV_1 wxPAPER_P32K_ROTATED + 1
#define wxPAPER_PENV_10 wxPAPER_PENV_1 + 1
#define wxPAPER_PENV_10_ROTATED wxPAPER_PENV_10 + 1
#define wxPAPER_PENV_1_ROTATED wxPAPER_PENV_10_ROTATED + 1
#define wxPAPER_PENV_2 wxPAPER_PENV_1_ROTATED + 1
#define wxPAPER_PENV_2_ROTATED wxPAPER_PENV_2 + 1
#define wxPAPER_PENV_3 wxPAPER_PENV_2_ROTATED + 1
#define wxPAPER_PENV_3_ROTATED wxPAPER_PENV_3 + 1
#define wxPAPER_PENV_4 wxPAPER_PENV_3_ROTATED + 1
#define wxPAPER_PENV_4_ROTATED wxPAPER_PENV_4 + 1
#define wxPAPER_PENV_5 wxPAPER_PENV_4_ROTATED + 1
#define wxPAPER_PENV_5_ROTATED wxPAPER_PENV_5 + 1
#define wxPAPER_PENV_6 wxPAPER_PENV_5_ROTATED + 1
#define wxPAPER_PENV_6_ROTATED wxPAPER_PENV_6 + 1
#define wxPAPER_PENV_7 wxPAPER_PENV_6_ROTATED + 1
#define wxPAPER_PENV_7_ROTATED wxPAPER_PENV_7 + 1
#define wxPAPER_PENV_8 wxPAPER_PENV_7_ROTATED + 1
#define wxPAPER_PENV_8_ROTATED wxPAPER_PENV_8 + 1
#define wxPAPER_PENV_9 wxPAPER_PENV_8_ROTATED + 1
#define wxPAPER_PENV_9_ROTATED wxPAPER_PENV_9 + 1
#define wxPAPER_QUARTO wxPAPER_PENV_9_ROTATED + 1
#define wxPAPER_STATEMENT wxPAPER_QUARTO + 1
#define wxPAPER_TABLOID wxPAPER_STATEMENT + 1
#define wxPAPER_TABLOID_EXTRA wxPAPER_TABLOID + 1
%ignore wxPrintOrientation;
enum wxPrintOrientation;
#define wxPORTRAIT 0
#define wxLANDSCAPE wxPORTRAIT + 1
%ignore wxDuplexMode;
enum wxDuplexMode;
#define wxDUPLEX_SIMPLEX 0
#define wxDUPLEX_HORIZONTAL wxDUPLEX_SIMPLEX + 1
#define wxDUPLEX_VERTICAL wxDUPLEX_HORIZONTAL + 1
#define wxPRINT_QUALITY_HIGH    -1
#define wxPRINT_QUALITY_MEDIUM  -2
#define wxPRINT_QUALITY_LOW     -3
#define wxPRINT_QUALITY_DRAFT   -4
typedef int wxPrintQuality;
%ignore wxPrintMode;
enum wxPrintMode;
#define wxPRINT_MODE_NONE  0
#define wxPRINT_MODE_PREVIEW  1
#define wxPRINT_MODE_FILE  2
#define wxPRINT_MODE_PRINTER  3
#define wxPRINT_MODE_STREAM  4
%ignore wxUpdateUI;
enum wxUpdateUI;
#define wxUPDATE_UI_NONE 0
#define wxUPDATE_UI_RECURSE wxUPDATE_UI_NONE + 1
#define wxUPDATE_UI_FROMIDLE wxUPDATE_UI_RECURSE + 1
#define wxSTAY_ON_TOP           0x8000
#define wxICONIZE               0x4000
#define wxMINIMIZE              wxICONIZE
#define wxMAXIMIZE              0x2000
#define wxCLOSE_BOX             0x1000
#define wxSYSTEM_MENU           0x0800
#define wxMINIMIZE_BOX          0x0400
#define wxMAXIMIZE_BOX          0x0200
#define wxTINY_CAPTION          0x0080  
#define wxRESIZE_BORDER         0x0040
#define wxINT8_MIN CHAR_MIN
#define wxINT8_MAX CHAR_MAX
#define wxUINT8_MAX UCHAR_MAX
#define wxINT16_MIN SHRT_MIN
#define wxINT16_MAX SHRT_MAX
#define wxUINT16_MAX USHRT_MAX
#define wxINT32_MIN INT_MIN-or-LONG_MIN
#define wxINT32_MAX INT_MAX-or-LONG_MAX
#define wxUINT32_MAX UINT_MAX-or-LONG_MAX
#define wxINT64_MIN LLONG_MIN
#define wxINT64_MAX LLONG_MAX
#define wxUINT64_MAX ULLONG_MAX
typedef int wxCoord;
%constant wxCoord wxDefaultCoord = -1;
typedef signed char wxInt8;
typedef unsigned char wxUint8;
typedef wxUint8 wxByte;
typedef signed short wxInt16;
typedef unsigned short wxUint16;
typedef wxUint16 wxWord;
typedef wxUint16 wxChar16;
typedef int wxInt32;
typedef unsigned int wxUint32;
typedef wxUint32 wxDword;
typedef wxUint32 wxChar32;
typedef wxLongLong_t wxInt64;
typedef wxULongLong_t wxUint64;
typedef ssize_t wxIntPtr;
typedef size_t wxUIntPtr;
typedef float wxFloat32;
typedef double wxFloat64;
typedef double wxDouble;
#define wxINT32_SWAP_ALWAYS( wxInt32_value )
#define wxUINT32_SWAP_ALWAYS( wxUint32_value )
#define wxINT16_SWAP_ALWAYS( wxInt16_value )
#define wxUINT16_SWAP_ALWAYS( wxUint16_value )
#define wxINT32_SWAP_ON_BE( wxInt32_value )
#define wxUINT32_SWAP_ON_BE( wxUint32_value )
#define wxINT16_SWAP_ON_BE( wxInt16_value )
#define wxUINT16_SWAP_ON_BE( wxUint16_value )
#define wxINT32_SWAP_ON_LE( wxInt32_value )
#define wxUINT32_SWAP_ON_LE( wxUint32_value )
#define wxINT16_SWAP_ON_LE( wxInt16_value )
#define wxUINT16_SWAP_ON_LE( wxUint16_value )
#define wxDECLARE_NO_ASSIGN_CLASS(classname)
#define wxDECLARE_NO_COPY_CLASS(classname)
#define wxDECLARE_NO_COPY_TEMPLATE_CLASS(classname, arg)
#define wxDECLARE_NO_COPY_TEMPLATE_CLASS_2(classname, arg1, arg2)
template <typename T> wxDELETE(T*& ptr);
template <typename T> wxDELETEA(T*& array);
#define wxDEPRECATED(function)
#define wxDEPRECATED_BUT_USED_INTERNALLY(function)
#define wxDEPRECATED_INLINE(func, body)
#define wxDEPRECATED_ACCESSOR(func, what)
#define wxDEPRECATED_BUT_USED_INTERNALLY_INLINE(func, body)
#define wxEXPLICIT
#define wxOVERRIDE
#define wxSUPPRESS_GCC_PRIVATE_DTOR_WARNING(name)
template <typename T> wxSwap(T& first, T& second);