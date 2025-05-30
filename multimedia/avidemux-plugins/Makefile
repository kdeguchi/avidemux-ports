PORTNAME=	avidemux
PORTVERSION=	${AVIDEMUX_VERSION}
CATEGORIES=	multimedia
PKGNAMESUFFIX=	-plugins

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	Simple GUI based video editor (Plugins)

LIB_DEPENDS=	libADM6avutil.so.${AVUTIL_VERSION}:multimedia/avidemux

MASTERDIR=	${.CURDIR}/../avidemux
PLIST=		${.CURDIR}/pkg-plist
PLIST_SUB=	QT_VER=${_QT_VER}

.include "${MASTERDIR}/Makefile.common"

CMAKE_SOURCE_PATH=	${WRKSRC}/avidemux_plugins

CMAKE_ARGS+=	-DAVIDEMUX_SOURCE_DIR=${WRKSRC} -DAVIDEMUX_INSTALL_PREFIX:PATH="${PREFIX}"
PLUGIN_UI=	COMMON SETTINGS

.if ${PORT_OPTIONS:MCLI}
BUILD_DEPENDS+=	avidemux-cli>0:multimedia/avidemux-cli
RUN_DEPENDS+=	avidemux-cli>0:multimedia/avidemux-cli
PLUGIN_UI+=	CLI
.endif

.if ${PORT_OPTIONS:MQT6}
BUILD_DEPENDS+=	avidemux-qt6>0:multimedia/avidemux-qt6
RUN_DEPENDS+=	avidemux-qt6>0:multimedia/avidemux-qt6
PLUGIN_UI+=	QT4
CMAKE_ARGS+=	-DCMAKE_MODULE_PATH=${WRKSRC}/avidemux/qt4/cmake
.elif ${PORT_OPTIONS:MQT5}
BUILD_DEPENDS+=	avidemux-qt5>0:multimedia/avidemux-qt5
RUN_DEPENDS+=	avidemux-qt5>0:multimedia/avidemux-qt5
CMAKE_ARGS+=	-DCMAKE_MODULE_PATH=${WRKSRC}/avidemux/qt4/cmake
PLUGIN_UI+=	QT4
.endif

CMAKE_ARGS+=	-DPLUGIN_UI="${PLUGIN_UI}"

post-configure: post-configure-common

.include <bsd.port.post.mk>
