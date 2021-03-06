#ifndef __PATH_H
#define __PATH_H

//CString MakePath( LPCTSTR lpszFileName );
CString MakePath( LPCTSTR lpszDirName, LPCTSTR lpszFileName );
CString MakePath( LPCTSTR lpDir, DWORD dwLan, LPCTSTR lpFile );
void MakePath( CString& strFullPath, LPCTSTR lpszDirName, LPCTSTR lpszFileName );
void MakePath( TCHAR* lpszFullPath, LPCTSTR lpszDirName, LPCTSTR lpszFileName );
//void SetResourcePath();
//LPCTSTR GetResourcePath();
#if defined( __CLIENT )
#define DIR_MUSIC        _T( "Data\\Music\\"   )
#define DIR_SOUND        _T( "Data\\Sound\\"   )
#define DIR_THEME        _T( "Data\\Theme\\Default\\"  )
#define DIR_TEXT         _T( "Data\\Text\\"  )
#define DIR_DIALOG       _T( "Data\\Dialog\\"  )
#define DIR_WORLD        _T( "Data\\World\\"   )
#define DIR_WORLD_GUILDCOMBAT  _T( "Data\\World\\WdGuildWar\\"   )
#define DIR_WORLDPLAY    _T( "Data\\World\\Play\\"  )
#define DIR_WORLDTEX     _T( "Data\\World\\Texture\\"  ) 
#define DIR_WORLDTEXMID  _T( "Data\\World\\TextureMid\\"  ) 
#define DIR_WORLDTEXLOW  _T( "Data\\World\\TextureLow\\"  ) 
#define DIR_WORLDTILE    _T( "Data\\World\\Tile\\"   )
#define DIR_TEXTURE      _T( "Data\\Texture\\" )
#define DIR_FONT         _T( "Data\\Font\\"    )
#define DIR_MODEL        _T( "Data\\"   )
#define DIR_ASE		     _T( "Data\\"   )
#define DIR_MODELTEX     _T( "Data\\"   )
#define DIR_MODELTEXMID  _T( "Data\\"   )
#define DIR_MODELTEXLOW  _T( "Data\\"   )
#define DIR_ICON         _T( "Data\\" )
#define DIR_ITEM         _T( "Data\\" )
#define DIR_EFFECT       _T( "Data\\Effect\\" )
#define DIR_WEATHER      _T( "Data\\"   )
#define DIR_CLIENT       _T( "Data\\"   )
#define DIR_SFX          _T( "Data\\"   )
#define DIR_SFXTEX       _T( "Data\\"   )
#define DIR_LOGO         _T( "Data\\"   )
#ifdef __BS_EFFECT_LUA
#define DIR_SFXLUA		 _T( "Data\\" )
#endif //__BS_EFFECT_LUA
#else
#define DIR_MUSIC        _T( "Music\\"   )
#define DIR_SOUND        _T( "Sound\\"   )
#define DIR_THEME        _T( "Theme\\Default\\"  )
#define DIR_TEXT         _T( "Text\\"  )
#define DIR_DIALOG       _T( "Dialog\\"  )
#define DIR_WORLD        _T( "World\\"   )
#define DIR_WORLD_GUILDCOMBAT  _T( "World\\WdGuildWar\\"   )
#define DIR_WORLDPLAY    _T( "World\\Play\\"  )
#define DIR_WORLDTEX     _T( "World\\Texture\\"  ) 
#define DIR_WORLDTEXMID  _T( "World\\TextureMid\\"  ) 
#define DIR_WORLDTEXLOW  _T( "World\\TextureLow\\"  ) 
#define DIR_WORLDTILE    _T( "World\\Tile\\"   )
#define DIR_TEXTURE      _T( "Texture\\" )
#define DIR_FONT         _T( "Font\\"    )
#define DIR_MODEL        _T( "Model\\"   )
#define DIR_ASE		     _T( "ModeL\\Ase\\"   )
#define DIR_MODELTEX     _T( "Model\\Texture\\"   )
#define DIR_MODELTEXMID  _T( "Model\\Texture\\"   )
#define DIR_MODELTEXLOW  _T( "Model\\Texture\\"   )
#define DIR_ICON         _T( "Icon\\" )
#define DIR_ITEM         _T( "Item\\" )
#define DIR_EFFECT       _T( "Effect\\" )
#define DIR_WEATHER      _T( "Weather\\"   )
#define DIR_CLIENT       _T( "Client\\"   )
#define DIR_SFX          _T( "Sfx\\"   )
#define DIR_SFXTEX       _T( "Sfx\\Texture\\"   )
#define DIR_LOGO         _T( "Model\\Logo\\"   )
#ifdef __BS_EFFECT_LUA
#define DIR_SFXLUA		 _T( "Sfx\\Scripts\\" )
#endif //__BS_EFFECT_LUA
#endif
#endif
