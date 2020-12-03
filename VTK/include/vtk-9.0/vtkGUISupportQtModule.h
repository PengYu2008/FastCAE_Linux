
#ifndef VTKGUISUPPORTQT_EXPORT_H
#define VTKGUISUPPORTQT_EXPORT_H

#ifdef VTKGUISUPPORTQT_STATIC_DEFINE
#  define VTKGUISUPPORTQT_EXPORT
#  define VTKGUISUPPORTQT_NO_EXPORT
#else
#  ifndef VTKGUISUPPORTQT_EXPORT
#    ifdef GUISupportQt_EXPORTS
        /* We are building this library */
#      define VTKGUISUPPORTQT_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define VTKGUISUPPORTQT_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef VTKGUISUPPORTQT_NO_EXPORT
#    define VTKGUISUPPORTQT_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef VTKGUISUPPORTQT_DEPRECATED
#  define VTKGUISUPPORTQT_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef VTKGUISUPPORTQT_DEPRECATED_EXPORT
#  define VTKGUISUPPORTQT_DEPRECATED_EXPORT VTKGUISUPPORTQT_EXPORT VTKGUISUPPORTQT_DEPRECATED
#endif

#ifndef VTKGUISUPPORTQT_DEPRECATED_NO_EXPORT
#  define VTKGUISUPPORTQT_DEPRECATED_NO_EXPORT VTKGUISUPPORTQT_NO_EXPORT VTKGUISUPPORTQT_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef VTKGUISUPPORTQT_NO_DEPRECATED
#    define VTKGUISUPPORTQT_NO_DEPRECATED
#  endif
#endif

#endif /* VTKGUISUPPORTQT_EXPORT_H */
