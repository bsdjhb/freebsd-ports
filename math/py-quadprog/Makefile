PORTNAME=	quadprog
DISTVERSION=	0.1.13
PORTREVISION=	1
CATEGORIES=	math python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	stephen@FreeBSD.org
COMMENT=	Quadratic programming package
WWW=		https://pypi.org/project/quadprog/

LICENSE=	GPLv2+

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}numpy>=1.2,1:math/py-numpy@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist cython

.include <bsd.port.mk>
