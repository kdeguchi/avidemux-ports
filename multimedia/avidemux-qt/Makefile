PORTNAME=	avidemux
PORTVERSION=	${AVIDEMUX_VERSION}
CATEGORIES=	multimedia

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	Simple GUI based video editor (${FLAVOR:tu} UI)

LIB_DEPENDS=	libADM6avutil.so.${AVUTIL_VERSION}:multimedia/avidemux

FLAVORS=	qt6 qt5

qt5_PKGNAMESUFFIX=	-qt5
qt5_CONFLICTS_INSTALL=	avidemux-qt6

qt6_PKGNAMESUFFIX=	-qt6
qt6_CONFLICTS_INSTALL=	avidemux-qt5

.if ${FLAVOR:U} == qt6
OPTIONS_SLAVE=	QT6
OPTIONS_EXCLUDE=	QT5
.elif ${FLAVOR:U} == qt5
OPTIONS_SLAVE=	QT5
OPTIONS_EXCLUDE=	QT6
.endif

.include "${MASTERDIR}/Makefile.common"

MASTERDIR=	${.CURDIR}/../avidemux

PLIST=		${.CURDIR}/pkg-plist

USES+=	desktop-file-utils

CMAKE_SOURCE_PATH=	${WRKSRC}/avidemux/qt4

CMAKE_ARGS+=	-DAVIDEMUX_SOURCE_DIR=${WRKSRC} -DAVIDEMUX_INSTALL_PREFIX:PATH="${PREFIX}"

post-configure: post-configure-common

.include <bsd.port.post.mk>
